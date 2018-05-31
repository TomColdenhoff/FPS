// Fill out your copyright notice in the Description page of Project Settings.

#include "AimTowardsTarget.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UAimTowardsTarget::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AActor* targetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(FName("Target")));
	
	OwnerComp.GetAIOwner()->SetFocus(targetActor);

	return EBTNodeResult::Succeeded;
}