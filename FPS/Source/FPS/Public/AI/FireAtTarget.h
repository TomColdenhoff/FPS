// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FireAtTarget.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UFireAtTarget : public UBTService
{
	GENERATED_BODY()

public:
	virtual void TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds) override;

private:
	//The Owner class
	class ABaseEnemy* p_Owner = nullptr;

	//The blackboard component
	UBlackboardComponent* p_Blackboard;
	
	//Timer for fire rate
	FTimerHandle m_FireTimerHandle;

	bool m_TimerDone = true;

	/*Calls the fire function on the owner*/
	void Fire();
	
};
