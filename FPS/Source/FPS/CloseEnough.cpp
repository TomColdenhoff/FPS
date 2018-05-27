// Fill out your copyright notice in the Description page of Project Settings.

#include "CloseEnough.h"
#include "UnitAIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"

void UCloseEnough::OnNodeActivation(FBehaviorTreeSearchData & SearchData)
{
	m_AIConPointer = Cast<AUnitAIController>(SearchData.OwnerComp.GetOwner());
	m_BlackboardComponent = SearchData.OwnerComp.GetBlackboardComponent();
}

bool UCloseEnough::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	AActor* targetPawn = (AActor*)OwnerComp.GetBlackboardComponent()->GetValueAsObject(FName("TargetToFollow"));
	FVector targetLocation = targetPawn->GetActorLocation();

	FVector lengthVector = targetLocation - OwnerComp.GetOwner()->GetActorLocation();
	float length = lengthVector.Size();
	if (length >= ACCEPTABLE_DISTANCE)
	{
		return true;
	}
	else
	{
		return false;
	}
}


