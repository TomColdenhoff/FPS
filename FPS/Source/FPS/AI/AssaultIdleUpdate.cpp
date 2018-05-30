// Fill out your copyright notice in the Description page of Project Settings.

#include "AssaultIdleUpdate.h"
#include "UnitAIController.h"
#include "AssualtCharacter.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"

void UAssaultIdleUpdate::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	if (p_AIController == nullptr)
	{
		p_AIController = Cast<AUnitAIController>(OwnerComp.GetOwner());
		p_AICharacter = Cast<AAssualtCharacter>(p_AIController->GetPawn());

		OwnerComp.GetBlackboardComponent()->SetValueAsBool(FName("bFollowsPath"), p_AICharacter->GetFollowPath());
	}

	if (m_CurrentWaypointLocation == FVector::ZeroVector && p_AICharacter->GetFollowPath())
	{
		m_CurrentWaypointLocation = p_AICharacter->Waypoints[m_CurrentWaypointIndex]->GetActorLocation();
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(FName("TargetLocation"), m_CurrentWaypointLocation);
		p_AICharacter->GetCharacterMovement()->MaxWalkSpeed = 100.0f;
	}

	if (IsCloseEnough())
	{
		MoveUpWaypoint();
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(FName("TargetLocation"), m_CurrentWaypointLocation);
	}


}

void UAssaultIdleUpdate::MoveUpWaypoint()
{
	if (m_CurrentWaypointIndex < p_AICharacter->Waypoints.Num() - 1)
		m_CurrentWaypointIndex++;
	else
		m_CurrentWaypointIndex = 0;

	m_CurrentWaypointLocation = p_AICharacter->Waypoints[m_CurrentWaypointIndex]->GetActorLocation();

}

bool UAssaultIdleUpdate::IsCloseEnough()
{
	if (p_AICharacter->GetCharacterMovement()->PathFollowingComp->GetStatus() != EPathFollowingStatus::Idle)
	{
		bHasMoved = true;
		p_AICharacter->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_NavWalking);
	}

	if (p_AICharacter->GetCharacterMovement()->PathFollowingComp->GetStatus() == EPathFollowingStatus::Idle && bHasMoved)
	{
		bHasMoved = false;
		return true;
	}

	return false;
}
