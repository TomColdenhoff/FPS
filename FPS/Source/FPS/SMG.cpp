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

USMG::USMG()
{
	ConstructorHelpers::FObjectFinder<USkeletalMesh> skeletalMesh(TEXT("SkeletalMesh'/Game/Models/Player/Arms/Arms_SMG.Arms_SMG'"));

	if (skeletalMesh.Object != nullptr)
		SetSkeletalMesh(skeletalMesh.Object);
	else
		UE_LOG(LogTemp, Warning, TEXT("nullptr"));

	ConstructorHelpers::FObjectFinder<UAnimBlueprint> animationInstance(TEXT("AnimInstance'/Game/Animations/SMG/BP_SMGAnim.BP_SMGAnim'"));

	if (animationInstance.Object != nullptr)
		SetAnimInstanceClass(animationInstance.Object->GeneratedClass);
	else
		UE_LOG(LogTemp, Warning, TEXT("nullptr"));

	SetRelativeLocation(FVector(40, 10, -20));
	SetRelativeRotation(FRotator(0, -90, 0));

	m_AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio Component"));
	if (m_AudioComponent != nullptr)
	{
		m_AudioComponent->AttachTo(this, FName("Weapon Front"));
		
		ConstructorHelpers::FObjectFinder<USoundBase> gunShot(TEXT("SoundBase'/Game/Sound/SFX/SMG/Silenced_SMG_Shot.Silenced_SMG_Shot'"));
		ConstructorHelpers::FObjectFinder<USoundBase> emptyGunShot(TEXT("SoundBase'/Game/Sound/SFX/SMG/Empty_SMG_Shot.Empty_SMG_Shot'"));

		if (gunShot.Object != nullptr)
			m_GunShotSound = gunShot.Object;
		else
			UE_LOG(LogTemp, Warning, TEXT("nullptr"));

		if (emptyGunShot.Object != nullptr)
			m_GunEmptySound = emptyGunShot.Object;
		else
			UE_LOG(LogTemp, Warning, TEXT("nullptr"));

		m_AudioComponent->SetSound(m_GunShotSound);
		m_AudioComponent->bAutoActivate = false;
	}
}

void USMG::BeginPlay()
{
	SetDefaultValues();
}

void USMG::Fire()
{

	switch (CurrentWeaponMode)
	{
	case EWeaponMode::Single:
		FireBullet();
		break;
	case EWeaponMode::Burst:
		GetWorld()->GetTimerManager().SetTimer(m_BulletTimerHandle, this, &USMG::FireBullet, BULLET_INTERVAL, true);
		break;
	case EWeaponMode::Auto:
		FireBullet();
		GetWorld()->GetTimerManager().SetTimer(m_BulletTimerHandle, this, &USMG::FireBullet, BULLET_INTERVAL, true);
		break;
	default:
		break;
	}

	UE_LOG(LogTemp, Warning, TEXT("Fire"));
}

void USMG::ReleaseFire()
{
	if (CurrentWeaponMode == EWeaponMode::Auto)
		GetWorld()->GetTimerManager().ClearTimer(m_BulletTimerHandle);
}

bool USMG::Reload()
{
	int32 difference = MAX_CLIP_SIZE - AmmoInClip;

	if (difference <= AmmoOutOfClip)
	{
		AmmoInClip += difference;
		AmmoOutOfClip -= difference;
		OnAmmoChange.Broadcast(AmmoInClip, AmmoOutOfClip);
		return true;
	}
	else
	{
		AmmoInClip += AmmoOutOfClip;
		AmmoOutOfClip = 0;
	}

	OnAmmoChange.Broadcast(AmmoInClip, AmmoOutOfClip);
	return false;
}

void USMG::ChangeWeaponMode()
{
	if (CurrentWeaponMode != EWeaponMode::Auto)
		CurrentWeaponMode = (EWeaponMode)((int)(CurrentWeaponMode)+1);
	else
		CurrentWeaponMode = (EWeaponMode)(0);
		
	UE_LOG(LogTemp, Warning, TEXT("Change State"));
}

void USMG::SetValues(int32 ViewportSizeX, int32 ViewportSizeY, UCameraComponent* CameraComponent)
{
	m_ViewportSizeX = ViewportSizeX;
	m_ViewportSizeY = ViewportSizeY;
	m_CameraComponent = CameraComponent;
}


void USMG::SetDefaultValues()
{
	AmmoInClip = MAX_CLIP_SIZE;
	AmmoOutOfClip = MAX_OUT_OF_CLIP_AMMO;

	CurrentWeaponMode = EWeaponMode::Single;
}

void USMG::FireBullet()
{
	if (AmmoInClip > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Fired Bullet"));

		FHitResult hitResult;
		FVector cameraPosition = m_CameraComponent->GetComponentLocation();
		FVector CameraDirection = m_CameraComponent->GetForwardVector();
		
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


		m_AudioComponent->Stop();
		m_AudioComponent->SetSound(m_GunShotSound);
		m_AudioComponent->Play();
		AmmoInClip--;
	}
	else
	{
		m_AudioComponent->Stop();
		m_AudioComponent->SetSound(m_GunEmptySound);
		m_AudioComponent->Play();
		GetWorld()->GetTimerManager().ClearTimer(m_BulletTimerHandle);
		ShotBulletsInBurst = 0;
	}

	if (CurrentWeaponMode == EWeaponMode::Burst)
	{
		if (++ShotBulletsInBurst == 3)
		{
			GetWorld()->GetTimerManager().ClearTimer(m_BulletTimerHandle);
			ShotBulletsInBurst = 0;
		}
	}

	OnAmmoChange.Broadcast(AmmoInClip, AmmoOutOfClip);
}
