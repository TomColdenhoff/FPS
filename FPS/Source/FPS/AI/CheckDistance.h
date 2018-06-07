// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "CheckDistance.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UCheckDistance : public UBTService
{
	GENERATED_BODY()
	
public:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:
	UPROPERTY(EditAnywhere)
	FBlackboardKeySelector m_TargetKey;

	UPROPERTY(EditAnywhere)
	FBlackboardKeySelector m_ToFarKey;

	UPROPERTY(EditAnywhere)
	FBlackboardKeySelector m_ToCloseKey;
	
	
};
