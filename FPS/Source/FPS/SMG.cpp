// Fill out your copyright notice in the Description page of Project Settings.

#include "SMG.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Public/TimerManager.h"

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
		//TODO play sound
		AmmoInClip--;
	}
	else
	{
		//TODO play empty sound
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
