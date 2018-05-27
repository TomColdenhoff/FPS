// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "RapidMoveTo.generated.h"

/**
 * Rapid Move To AI
 */
UCLASS()
class FPS_API URapidMoveTo : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) override;
	
private:
	class AUnitAIController* m_AIConPointer;
	
};
