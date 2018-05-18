// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "SMG.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FPS_API USMG : public UBaseWeapon
{
	GENERATED_BODY()
	
public:
	//SMG constructor
	USMG();

	virtual void Fire() override;
	virtual void ReleaseFire() override;
	virtual bool Reload() override;
	virtual void ChangeWeaponMode() override;
	virtual void SetValues(class UCameraComponent* CameraComponentPointer) override;


protected:
	virtual void BeginPlay() override;

	virtual void SetWeaponAudio() override;

private:
	//SMG behaviour variables
	const int32 MAX_CLIP_SIZE = 30;
	const int32 MAX_OUT_OF_CLIP_AMMO = 210;
	const float BULLET_INTERVAL = 0.1f;
	const float AIM_DISTANCE = 2000.0f;

	/*Sets all default behaviour values*/
	void InitializeValues();
	/*Fires "bullet" linetrace*/
	void FireBullet();
};
