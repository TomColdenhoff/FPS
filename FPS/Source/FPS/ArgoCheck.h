// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ArgoCheck.generated.h"

/**
 * Behvavior Of AI
 */
UCLASS()
class FPS_API UArgoCheck : public UBTService
{
	GENERATED_BODY()
	
public:
	UArgoCheck();
	virtual void TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds) override;

private:
	TArray<EObjectTypeQuery> m_DesiredObjects;
	FVector m_MyLocation;
	class AUnitAIController* m_AIConPointer;
	FBlackboardKeySelector m_TargetToFollow;
	FBlackboardKeySelector m_TargetLocation;


	
	
};
