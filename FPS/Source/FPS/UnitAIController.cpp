// Fill out your copyright notice in the Description page of Project Settings.

#include "UnitAIController.h"
#include "AssualtCharacter.h"
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

	AAssualtCharacter* AI = Cast<AAssualtCharacter>(InPawn);

	UseBlackboard(AI->Blackboard, BlackboardComponent);
	BlackboardComponent->SetValueAsVector(FName("HomeLocation"), AI->GetActorLocation());

	BehaviorComponent->StartTree(*AI->BehaviourTree);

	UE_LOG(LogTemp, Warning, TEXT("Run possess"));
}
