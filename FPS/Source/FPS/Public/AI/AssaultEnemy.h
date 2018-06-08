// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AI/BaseEnemy.h"
#include "AssaultEnemy.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AAssaultEnemy : public ABaseEnemy
{
	GENERATED_BODY()
	
public:
	AAssaultEnemy();

protected:
	virtual void SetMuzzleParticle() override;
	virtual void SetWeaponAudio() override;

	virtual void BeginPlay() override;
	
	virtual void OnSeePlayer(APawn* Pawn) override;
	virtual void OnHearNoise(APawn* Pawn, const FVector& Location, float Volume) override;
	
	
};
