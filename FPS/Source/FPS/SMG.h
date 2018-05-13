// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "SMG.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API USMG : public UWeaponBase
{
	GENERATED_BODY()
	
public:
	virtual void Fire() override;

	USMG();

	
	
};
