// Fill out your copyright notice in the Description page of Project Settings.

#include "FindCoverPoint.h"
#include "CoverPoint.h"
#include "WorldCollision.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UFindCoverPoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	TArray<ACoverPoint*> coverPoints = GetCoverPoints(OwnerComp.GetAIOwner()->GetPawn());

	AActor* target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(m_TargetKey.SelectedKeyName));
	ACoverPoint* coverPoint = nullptr;
	if (FindUsablePoint(coverPoints, coverPoint, target->GetActorLocation()))
	{
		SetCoverPoint(coverPoint, OwnerComp.GetBlackboardComponent());
	}

	return EBTNodeResult::Succeeded;
}

TArray<ACoverPoint*> UFindCoverPoint::GetCoverPoints(AActor* Owner)
{
	TArray<FOverlapResult> outHits;

	FVector originPoint = Owner->GetActorLocation();
	FCollisionShape collisionSphere = FCollisionShape::MakeSphere(m_SearchRadius);

	//Draw debug sphere if enabled
	if (m_DrawDebug)
		DrawDebugSphere(GetWorld(), originPoint, collisionSphere.GetSphereRadius(), 100, FColor::Purple, true, 0.1f);

	//Get all actors who overlap and react on ECC_GameTraceChannel1
	bool gotHits = GetWorld()->OverlapMultiByChannel(outHits, originPoint, FQuat::Identity, ECC_GameTraceChannel1, collisionSphere);

	TArray<ACoverPoint*> coverPoints;

	if (gotHits)
	{
		for (int32 hit = 0; hit != outHits.Num(); ++hit)
		{
			//If the actor contains the tag "Cover" we store the actor
			if (outHits[hit].Actor->Tags.Contains(FName("Cover")))
			{
				coverPoints.Add(Cast<ACoverPoint>(outHits[hit].Actor));
			}
		}
	}

	return coverPoints;

}

bool UFindCoverPoint::FindUsablePoint(TArray<class ACoverPoint*>& CoverPoints, ACoverPoint*& OutCoverPoint, FVector BlackboardTargetPosition)
{
	FHitResult outHit;

	//Check each point for safety and return if found one
	for (int i = 0; i != CoverPoints.Num(); ++i)
	{
		bool gotHit = GetWorld()->LineTraceSingleByChannel(outHit, CoverPoints[i]->GetActorLocation(), BlackboardTargetPosition, ECC_MAX);
		if (gotHit)
		{
			if (!outHit.Actor->Tags.Contains(FName("Player")))
			{
				OutCoverPoint = CoverPoints[i];
				return true;
			}
		}
	}

	return false;
}

void UFindCoverPoint::SetCoverPoint(ACoverPoint* CoverPoint, UBlackboardComponent* Blackboard)
{
	if (CoverPoint == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Something wrong CoverPoint is null pointer should not be possible"));
		return;
	}

	Blackboard->SetValueAsObject(m_CoverPointKey.SelectedKeyName, CoverPoint);
	return;
}
