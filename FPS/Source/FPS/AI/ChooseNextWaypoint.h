// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ChooseNextWaypoint.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UChooseNextWaypoint : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) override;

private:
	void GetWaypoints(class ABaseEnemy * OwnerCharacter);
	int SetNextWaypoint(UBehaviorTreeComponent & OwnerComp);
	void CycleIndex(UBehaviorTreeComponent & OwnerComp, int32 CurrentIndex);

	TArray<AActor*> m_Waypoints;
	
	
};
