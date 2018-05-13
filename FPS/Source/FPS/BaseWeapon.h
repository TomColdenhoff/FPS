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


	
public:	
	virtual void Fire() {}
	virtual void Reload() {}
	virtual void ChangeWeaponMode() {}
};
