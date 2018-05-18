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

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAmmoChanged, int32, AmmoInClip, int32, AmmoOutOfClip);

protected:
	//Weapon Ammo variables
	int32 AmmoInClip = 0;
	int32 AmmoOutOfClip = 0;

	//Weapon Fire variables
	int32 BulletsShotInBurstAmount = 0;
	FTimerHandle BulletTimerHandle;
	EWeaponMode CurrentWeaponMode;

	//Weapon events
	UPROPERTY(BlueprintAssignable)
	FAmmoChanged OnAmmoChange;

	//Weapon Audio
	UAudioComponent* AudioComponent;
	USoundBase* GunShotSound;
	USoundBase* GunEmptySound;

	//Weapon Particle
	UParticleSystemComponent* ParticleComponent;
	UParticleSystem* MuzzleFlashPartical;

	//Weapon Aiming
	class UCameraComponent* PlayerCameraComponent;

public:	
	//Default Base Constructor
	UBaseWeapon();

	/*Calls fire behaviour of weapon */
	virtual void Fire() {}
	/*Calls Release Fire behaviour of weapon */
	virtual void ReleaseFire() {}
	/*Calls Reload behaviour of weapon */
	virtual bool Reload() { return false; }
	/*Calls Weapon Mode Change Behaviour of weapon */
	virtual void ChangeWeaponMode() {}

	virtual void SetValues(class UCameraComponent* CameraComponentPointer) {}

	/*Requests an ammo info update*/
	UFUNCTION(BlueprintCallable, Category = "Weapon Info")
	void GetAmmoUpdate();
};
