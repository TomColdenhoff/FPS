// Fill out your copyright notice in the Description page of Project Settings.

#include "ClearKey.h"
#include "BehaviorTree/BlackboardComponent.h"



EBTNodeResult::Type UClearKey::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{

	OwnerComp.GetBlackboardComponent()->SetValueAsObject(m_KeyToClear.SelectedKeyName, nullptr);

	return EBTNodeResult::Succeeded;
}
