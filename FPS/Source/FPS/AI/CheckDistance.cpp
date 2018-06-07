// Fill out your copyright notice in the Description page of Project Settings.

#include "CheckDistance.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"


void UCheckDistance::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	UBlackboardComponent* blackboardComponent = OwnerComp.GetBlackboardComponent();

	FVector ownerLocation = OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation();
	AActor* target = Cast<AActor>(blackboardComponent->GetValueAsObject(m_TargetKey.SelectedKeyName));

	//Calculate distance
	float distance = FVector::Distance(ownerLocation, target->GetActorLocation());
	
	//Tell AI blackboard we are to close/to far or neither
	if (distance > 1500)
	{
		blackboardComponent->SetValueAsBool(m_ToFarKey.SelectedKeyName, true);
	}
	else if (distance <= 300)
	{
		blackboardComponent->SetValueAsBool(m_ToCloseKey.SelectedKeyName, true);
	}
	else
	{
		blackboardComponent->SetValueAsBool(m_ToFarKey.SelectedKeyName, false);
		blackboardComponent->SetValueAsBool(m_ToCloseKey.SelectedKeyName, false);
	}
}
