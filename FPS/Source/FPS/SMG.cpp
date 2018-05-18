// Fill out your copyright notice in the Description page of Project Settings.

#include "SMG.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Public/DrawDebugHelpers.h"
#include "Dummy.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"

USMG::USMG()
{
	SetWeaponMesh();
	SetWeaponAnimation();
	SetWeaponAudio();
	SetWeaponParticle();
}

void USMG::SetWeaponMesh()
{
	ConstructorHelpers::FObjectFinder<USkeletalMesh> skeletalWeaponMesh(TEXT("SkeletalMesh'/Game/Models/Player/Arms/Arms_SMG.Arms_SMG'"));

	if (skeletalWeaponMesh.Object == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Skeletal Weapon Mesh is nullptr"));
		return;
	}

	SetSkeletalMesh(skeletalWeaponMesh.Object);

	SetRelativeLocation(FVector(40, 10, -20));
	SetRelativeRotation(FRotator(0, -90, 0));
}

void USMG::SetWeaponAnimation()
{
	ConstructorHelpers::FObjectFinder<UAnimBlueprint> animationInstance(TEXT("AnimInstance'/Game/Animations/SMG/BP_SMGAnim.BP_SMGAnim'"));

	if (animationInstance.Object == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Animation Instance is nullptr"));
		return;
	}

	SetAnimInstanceClass(animationInstance.Object->GeneratedClass);
}

void USMG::SetWeaponAudio()
{
	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio Component"));

	if (AudioComponent == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("AudioComponent is nullptr"));
		return;
	}

	//Attach Audio Component to socket in front of weapon
	AudioComponent->AttachTo(this, FName("Weapon Front"));

	ConstructorHelpers::FObjectFinder<USoundBase> gunShot(TEXT("SoundBase'/Game/Sound/SFX/SMG/Silenced_SMG_Shot.Silenced_SMG_Shot'"));
	ConstructorHelpers::FObjectFinder<USoundBase> emptyGunShot(TEXT("SoundBase'/Game/Sound/SFX/SMG/Empty_SMG_Shot.Empty_SMG_Shot'"));

	if (gunShot.Object == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("gunShot sound file is nullptr"));
		return;
	}

	GunShotSound = gunShot.Object;

	if (emptyGunShot.Object == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("emptyGunSHot sound file is nullptr"));
		return;
	}

	GunEmptySound = emptyGunShot.Object;

	//Set default Audio Component sound to gun shot
	AudioComponent->SetSound(GunShotSound);
	//Make sure the Audio Component does not play on activation
	AudioComponent->bAutoActivate = false;
}

void USMG::SetWeaponParticle()
{
	ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(FName("Fire Particle Component"));

	if (ParticleComponent == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Particle Component is a nullptr"));
		return;
	}

	//Attach Particle Component to socket in front of weapon
	ParticleComponent->AttachTo(this, FName("Weapon Front"));

	ConstructorHelpers::FObjectFinder<UParticleSystem> muzzleFireParticle(TEXT("Particle Component'/Game/Particles/Muzzle_Flash/P_Muzzle_Flash.P_Muzzle_Flash'"));

	if (muzzleFireParticle.Object == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("fireParticle file is a nullptr"));
		return;
	}
	
	MuzzleFlashPartical = muzzleFireParticle.Object;
	ParticleComponent->SetTemplate(MuzzleFlashPartical);
}

void USMG::BeginPlay()
{
	InitializeValues();
}

void USMG::InitializeValues()
{
	AmmoInClip = MAX_CLIP_SIZE;
	AmmoOutOfClip = MAX_OUT_OF_CLIP_AMMO;

	CurrentWeaponMode = EWeaponMode::Single;
}

void USMG::Fire()
{
	switch (CurrentWeaponMode)
	{
		case EWeaponMode::Single:
			FireBullet();
			break;
		case EWeaponMode::Burst:
			GetWorld()->GetTimerManager().SetTimer(BulletTimerHandle, this, &USMG::FireBullet, BULLET_INTERVAL, true);
			break;
		case EWeaponMode::Auto:
			FireBullet();
			GetWorld()->GetTimerManager().SetTimer(BulletTimerHandle, this, &USMG::FireBullet, BULLET_INTERVAL, true);
			break;
		default:
			break;
	}
}

void USMG::ReleaseFire()
{
	switch (CurrentWeaponMode)
	{
		case EWeaponMode::Auto:
			//Stop loop of firing bullets
			GetWorld()->GetTimerManager().ClearTimer(BulletTimerHandle);
			break;
		default:
			break;
	}
}

bool USMG::Reload()
{
	int32 neededBulletAmount = MAX_CLIP_SIZE - AmmoInClip;

	if (neededBulletAmount <= AmmoOutOfClip)
	{
		AmmoInClip += neededBulletAmount;
		AmmoOutOfClip -= neededBulletAmount;

		//Update Ammo info
		GetAmmoUpdate();
		//Return true because player and animator need to know we are reloading 
		return true;
	}
	else
	{
		AmmoInClip += AmmoOutOfClip;
		AmmoOutOfClip = 0;
	}

	//Update Ammo info
	GetAmmoUpdate();
	//Return true because player and animator need to know we are not reloading 
	return false;
}

void USMG::ChangeWeaponMode()
{
	if (CurrentWeaponMode != EWeaponMode::Auto)
		CurrentWeaponMode = (EWeaponMode)((int)(CurrentWeaponMode)+1);
	else
		CurrentWeaponMode = (EWeaponMode)(0);
}

void USMG::SetValues(UCameraComponent* CameraComponentPointer)
{
	PlayerCameraComponent = CameraComponentPointer;
}




void USMG::FireBullet()
{
	if (AmmoInClip > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Fired Bullet"));

		FHitResult hitResult;
		FVector cameraPosition = PlayerCameraComponent->GetComponentLocation();
		FVector CameraDirection = PlayerCameraComponent->GetForwardVector();
		
		if (GetWorld()->LineTraceSingleByChannel(hitResult, cameraPosition, (cameraPosition + (CameraDirection * 2000)), ECC_Visibility))
		{
			UE_LOG(LogTemp, Warning, TEXT("Camera Hit"));
			FVector weaponDirection = hitResult.Location - GetSocketLocation(FName("Weapon Front"));
			if (GetWorld()->LineTraceSingleByChannel(hitResult, GetSocketLocation(FName("Weapon Front")), (weaponDirection * 2000.0f), ECC_Visibility))
			{
				UE_LOG(LogTemp, Warning, TEXT("Weapon Hit"));
				DrawDebugLine(GetWorld(), GetSocketLocation(FName("Weapon Front")), (weaponDirection * 2000.0f), FColor::Green, false, 5.0f);
				ADummy* dummy = Cast<ADummy>(hitResult.Actor);

				if (dummy != nullptr)
					dummy->DamageTarget(50.0f);
			}
		}


		AudioComponent->Stop();
		AudioComponent->SetSound(GunShotSound);
		AudioComponent->Play();
		AmmoInClip--;
		ParticleComponent->Deactivate();
		ParticleComponent->Activate();
	}
	else
	{
		AudioComponent->Stop();
		AudioComponent->SetSound(GunEmptySound);
		AudioComponent->Play();
		GetWorld()->GetTimerManager().ClearTimer(BulletTimerHandle);
		BulletsShotInBurstAmount = 0;
	}

	if (CurrentWeaponMode == EWeaponMode::Burst)
	{
		if (++BulletsShotInBurstAmount == 3)
		{
			GetWorld()->GetTimerManager().ClearTimer(BulletTimerHandle);
			BulletsShotInBurstAmount = 0;
		}
	}

	OnAmmoChange.Broadcast(AmmoInClip, AmmoOutOfClip);
}
