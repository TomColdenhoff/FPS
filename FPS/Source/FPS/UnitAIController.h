// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "UnitAIController.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AUnitAIController : public AAIController
{
	GENERATED_BODY()

public:
	AUnitAIController();
	
protected:
	virtual void BeginPlay() override;
	virtual void Possess(class APawn* InPawn) override;

private:
	class UBehaviorTreeComponent* BehaviorComponent;
	class UBlackboardComponent* BlackboardComponent;
};
