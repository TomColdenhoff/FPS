// Fill out your copyright notice in the Description page of Project Settings.

#include "ToggleDuck.h"
#include "BaseEnemy.h"
#include "AIController.h"





EBTNodeResult::Type UToggleDuck::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	ABaseEnemy* owner = Cast<ABaseEnemy>(OwnerComp.GetAIOwner()->GetPawn());

	owner->GoDucking();
	
	return EBTNodeResult::Succeeded;
}
