// Fill out your copyright notice in the Description page of Project Settings.

#include "ChangeSpeed.h"
#include "BaseEnemy.h"
#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"



EBTNodeResult::Type UChangeSpeed::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	ABaseEnemy* ownerAI = Cast<ABaseEnemy>(OwnerComp.GetAIOwner()->GetPawn());
	ownerAI->GetCharacterMovement()->MaxWalkSpeed = m_NewAISpeed;

	return EBTNodeResult::Succeeded;
}
