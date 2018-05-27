// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "CloseEnough.generated.h"

/**
 * Close enough for AI
 */
UCLASS()
class FPS_API UCloseEnough : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	virtual void OnNodeActivation(FBehaviorTreeSearchData & SearchData) override;
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

private:
	const float ACCEPTABLE_DISTANCE = 0.1;

	class AUnitAIController* m_AIConPointer;
	UBlackboardComponent* m_BlackboardComponent;
	
	
};
