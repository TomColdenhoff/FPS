// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "AssaultIdleUpdate.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UAssaultIdleUpdate : public UBTService
{
	GENERATED_BODY()
	
public:
	virtual void TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds) override;

private:
	class AAssualtCharacter* p_AICharacter = nullptr;
	class AUnitAIController* p_AIController = nullptr;

	UPROPERTY(EditAnywhere)
	float m_AcceptenceDistance;

	int32 m_CurrentWaypointIndex = 0;
	FVector m_CurrentWaypointLocation = FVector::ZeroVector;

	bool bHasMoved = false;

	void MoveUpWaypoint();
	bool IsCloseEnough();
	
	
};
