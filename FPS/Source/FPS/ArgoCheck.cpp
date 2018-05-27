// Fill out your copyright notice in the Description page of Project Settings.

#include "ArgoCheck.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "EngineUtils.h"
#include "AssualtCharacter.h"
#include "UnitAIController.h"

UArgoCheck::UArgoCheck()
{
	m_DesiredObjects.Add(EObjectTypeQuery::ObjectTypeQuery8);
}

void UArgoCheck::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	if (m_AIConPointer == nullptr)
	{
		m_AIConPointer = Cast<AUnitAIController>(OwnerComp.GetOwner());
	}

	TArray<AActor*> actorToIgnore;

	for (TActorIterator<AAssualtCharacter> ActorItr(OwnerComp.GetWorld()); ActorItr; ++ActorItr)
	{
		actorToIgnore.Add(*ActorItr);
	}

	m_MyLocation = m_AIConPointer->GetPawn()->GetActorLocation();

	TArray<FHitResult> hitsOut;
	FCollisionShape collisionSphere = FCollisionShape::MakeSphere(1500.0f);
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActors(actorToIgnore);

	OwnerComp.GetWorld()->SweepMultiByObjectType(hitsOut, m_MyLocation, m_MyLocation + FVector(0.0f, 0.0f, 15.0f), FQuat::Identity, ECC_Pawn, collisionSphere, collisionParams);

	FHitResult hitOut;

	for (int32 i = 0; i != hitsOut.Num(); ++i)
	{
		OwnerComp.GetWorld()->LineTraceSingleByChannel(hitOut, m_MyLocation, hitsOut[i].Actor->GetActorLocation(), ECC_Camera, collisionParams);

		if (hitOut.Actor == hitsOut[i].Actor)
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsObject("TargetToFollow", hitOut.GetActor());
			OwnerComp.GetBlackboardComponent()->SetValueAsVector("TargetLocation", hitOut.GetActor()->GetActorLocation());
			return;
		}
		else
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsObject("TargetToFollow", nullptr);
		}
	}
}


