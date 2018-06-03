// Fill out your copyright notice in the Description page of Project Settings.

#include "FindCoverPoint.h"
#include "CoverPoint.h"
#include "WorldCollision.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/Engine/World.h"

EBTNodeResult::Type UFindCoverPoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	return EBTNodeResult::Succeeded;
}

TArray<ACoverPoint*> UFindCoverPoint::GetCoverPoints(AActor* Owner)
{
	TArray<FHitResult> outHits;

	FVector originPoint = Owner->GetActorLocation();
	FCollisionShape collisionSphere = FCollisionShape::MakeSphere(m_SearchRadius);

	//Draw debug sphere if enabled
	if (m_DrawDebug)
		DrawDebugSphere(GetWorld(), originPoint, collisionSphere.GetSphereRadius(), 100, FColor::Purple, true);

	bool gotHits = GetWorld()->SweepMultiByChannel(outHits, originPoint, originPoint, FQuat::Identity, ECC_GameTraceChannel1, collisionSphere);

	TArray<ACoverPoint*> coverPoints;

	if (gotHits)
	{
		for (int32 hit = 0; hit != outHits.Num(); ++hit)
		{
			coverPoints.Add(Cast<ACoverPoint>(outHits[hit].Actor));
		}
	}

	return coverPoints;

}

bool UFindCoverPoint::FindUsablePoint(TArray<class ACoverPoint*> CoverPoints, ACoverPoint& OutCoverPoint)
{
	return false;
}

void UFindCoverPoint::SetCoverPoint(ACoverPoint CoverPoint)
{

}
