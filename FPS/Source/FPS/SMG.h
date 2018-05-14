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
	USMG();

	virtual void Fire() override;
	virtual void Reload() override;
	virtual void ChangeWeaponMode() override;

protected:
	virtual void BeginPlay() override;

private:
	void SetDefaultValues();

	const int MAX_CLIP_SIZE = 30;
	const int MAX_OUT_OF_CLIP_AMMO = 210;

	
	
};
