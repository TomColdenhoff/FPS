// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AssaultIdle.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UAssaultIdle : public UBTTaskNode
{
	GENERATED_BODY()

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) override;
	
private:
	//class AUnitAIController* m_AIConPointer = nullptr;
	//class AAssualtCharacter* m_AICharacterPointer = nullptr;
	
	
};
