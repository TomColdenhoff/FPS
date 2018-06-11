// Fill out your copyright notice in the Description page of Project Settings.

#include "UnitAIController.h"
#include "BaseEnemy.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"

AUnitAIController::AUnitAIController()
{
	BehaviorComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(FName("Behaviour Tree Component"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(FName("Blackboard Component"));

	
}

void AUnitAIController::BeginPlay()
{
	Super::BeginPlay();
}

void AUnitAIController::Possess(APawn * InPawn)
{ 
	Super::Possess(InPawn);

	ABaseEnemy* AI = Cast<ABaseEnemy>(InPawn);

	if (AI != nullptr)
	{
		UseBlackboard(AI->GetBlackboardData(), BlackboardComponent);
		BlackboardComponent->SetValueAsVector(FName("HomeLocation"), AI->GetActorLocation());

		BehaviorComponent->StartTree(*AI->GetBehaviourTree());
	}
}
