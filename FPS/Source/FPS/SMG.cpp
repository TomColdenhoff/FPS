// Fill out your copyright notice in the Description page of Project Settings.

#include "SMG.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Public/DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Dummy.h"

USMG::USMG()
{
	SetWeaponMesh("SkeletalMesh'/Game/Models/Player/Arms/Arms_SMG.Arms_SMG'");
	SetWeaponAnimation("AnimInstance'/Game/Animations/SMG/BP_SMGAnim.BP_SMGAnim'");
	SetWeaponAudio();
	SetWeaponParticle("Particle Component'/Game/Particles/Muzzle_Flash/P_Muzzle_Flash.P_Muzzle_Flash'");
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

	if (AmmoInClip <= 0)
	{
		//Play weapon empty sound
		AudioComponent->Stop();
		AudioComponent->SetSound(GunEmptySound);
		AudioComponent->Play();

		//Stop any bullet loops
		GetWorld()->GetTimerManager().ClearTimer(BulletTimerHandle);
		BulletsShotInBurstAmount = 0;

		return;
	}

	FHitResult hitResult;
	FVector cameraPosition = PlayerCameraComponent->GetComponentLocation();
	FVector CameraDirection = PlayerCameraComponent->GetForwardVector();

	if (GetWorld()->LineTraceSingleByChannel(hitResult, cameraPosition, (cameraPosition + (CameraDirection * AIM_DISTANCE)), ECC_Visibility))
	{

		FVector weaponAimDirection = hitResult.Location - GetSocketLocation(FName("Weapon Front"));
		if (GetWorld()->LineTraceSingleByChannel(hitResult, GetSocketLocation(FName("Weapon Front")), (weaponAimDirection * AIM_DISTANCE), ECC_Visibility))
		{

			DrawDebugLine(GetWorld(), GetSocketLocation(FName("Weapon Front")), (weaponAimDirection * AIM_DISTANCE), FColor::Green, false, 5.0f);

			ADummy* dummy = Cast<ADummy>(hitResult.Actor); //TODO replace for a IHittable

			if (dummy != nullptr)
				dummy->DamageTarget(50.0f);
		}
	}

	if (CurrentWeaponMode == EWeaponMode::Burst)
	{
		if (++BulletsShotInBurstAmount == 3)
		{
			GetWorld()->GetTimerManager().ClearTimer(BulletTimerHandle);
			BulletsShotInBurstAmount = 0;
		}
	}
	
	//Substract a bullet from clip the weapon has fired a "bullet" linecast
	AmmoInClip--;
	//Request a ammo update event
	GetAmmoUpdate();

	AudioComponent->Stop();
	AudioComponent->SetSound(GunShotSound);
	AudioComponent->Play();

	ParticleComponent->Deactivate();
	ParticleComponent->Activate();
}
