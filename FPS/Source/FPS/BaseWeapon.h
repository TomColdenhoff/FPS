// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "BaseWeapon.generated.h"

/**
 * 
 */
enum class EWeaponMode : uint8
{
	Single = 0,
	Burst,
	Auto,
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FPS_API UBaseWeapon : public USkeletalMeshComponent
{
	GENERATED_BODY()


protected:
	int AmmoInClip = 0;
	int AmmoOutOfClip = 0;
	int32 ShotBulletsInBurst = 0;

	EWeaponMode CurrentWeaponMode;
	
public:	

	UBaseWeapon();

	virtual void Fire() {}
	virtual void ReleaseFire() {}
	virtual bool Reload() { return false; }
	virtual void ChangeWeaponMode() {}

	int GetAmmoInClip() const { return AmmoInClip; }
	int GetAmmoOutOfClip() const { return AmmoOutOfClip; }
	EWeaponMode GetWeaponMode() const { return CurrentWeaponMode; }



};
