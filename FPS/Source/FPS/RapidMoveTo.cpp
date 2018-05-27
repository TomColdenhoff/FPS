// Fill out your copyright notice in the Description page of Project Settings.

#include "RapidMoveTo.h"
#include "UnitAIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type URapidMoveTo::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	if (m_AIConPointer == nullptr)
	{
		m_AIConPointer = Cast<AUnitAIController>(OwnerComp.GetOwner());
	}

	AActor* Goal = (AActor*)OwnerComp.GetBlackboardComponent()->GetValueAsObject(FName("TargetToFollow"));
	m_AIConPointer->MoveToActor(Goal, 5.0f, false);

	return EBTNodeResult::Type::InProgress;
}


