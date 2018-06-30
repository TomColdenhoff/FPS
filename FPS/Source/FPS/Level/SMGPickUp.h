// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Level/HoldAblePickUp.h"
#include "SMGPickUp.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API ASMGPickUp : public AHoldAblePickUp
{
	GENERATED_BODY()
	
public:
	virtual void ToHands(AFPSPlayer* Player) override;	
};
