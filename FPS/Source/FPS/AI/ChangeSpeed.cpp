// Fill out your copyright notice in the Description page of Project Settings.

#include "ChangeSpeed.h"
#include "AssualtCharacter.h"
#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"



EBTNodeResult::Type UChangeSpeed::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAssualtCharacter* ownerAI = Cast<AAssualtCharacter>(OwnerComp.GetAIOwner()->GetPawn());
	ownerAI->GetCharacterMovement()->MaxWalkSpeed = m_NewAISpeed;

	return EBTNodeResult::Succeeded;
}
