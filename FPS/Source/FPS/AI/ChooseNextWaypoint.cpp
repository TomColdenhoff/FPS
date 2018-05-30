// Fill out your copyright notice in the Description page of Project Settings.

#include "ChooseNextWaypoint.h"
#include "AssualtCharacter.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/AIController.h"

EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAssualtCharacter* AICharacter = Cast<AAssualtCharacter>(OwnerComp.GetAIOwner()->GetPawn());
	
	GetWaypoints(AICharacter);
	int32 currentWaypointIndex = SetNextWaypoint(OwnerComp);
	CycleIndex(OwnerComp, currentWaypointIndex);

	return EBTNodeResult::Succeeded;
}

void UChooseNextWaypoint::GetWaypoints(const AAssualtCharacter * OwnerCharacter)
{
	if (OwnerCharacter == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Owner Character is nullptr!"));
		return;
	}
	
	m_Waypoints = OwnerCharacter->Waypoints;
}

int UChooseNextWaypoint::SetNextWaypoint(UBehaviorTreeComponent & OwnerComp)
{
	int32 waypointIndex = OwnerComp.GetBlackboardComponent()->GetValueAsInt(FName("NextWaypointIndex"));

	if (waypointIndex >= m_Waypoints.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("waypoint index higher then amount of waypoints!"));
		return 0;
	}

	OwnerComp.GetBlackboardComponent()->SetValueAsObject(FName("Waypoint"), m_Waypoints[waypointIndex]);
	
	return waypointIndex;
}

void UChooseNextWaypoint::CycleIndex(UBehaviorTreeComponent & OwnerComp, int32 CurrentIndex)
{
	int32 nextIndex = (CurrentIndex + 1) % m_Waypoints.Num();
	OwnerComp.GetBlackboardComponent()->SetValueAsInt(FName("NextWaypointIndex"), nextIndex);
}
