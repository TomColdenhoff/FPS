// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ChangeSpeed.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UChangeSpeed : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) override;

private:
	UPROPERTY(EditAnywhere)
	float m_NewAISpeed;
	
	
};
