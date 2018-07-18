// Fill out your copyright notice in the Description page of Project Settings.

#include "ReachPosition.h"
#include "../GameData.h"
#include "Engine.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


// Sets default values
AReachPosition::AReachPosition()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AReachPosition::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AReachPosition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AReachPosition::Update()
{
	float dist = FVector::Dist(p_Destination->GetActorLocation(), p_PlayerActor->GetActorLocation());
	if (dist < m_AcceptanceDistance)
		return true;

	return false;
}

void AReachPosition::OnTaskEnd()
{
}

void AReachPosition::OnTaskStart()
{
	//Get the game singleton
	UGameData* gameData = Cast<UGameData>(GEngine->GameSingleton);

	if (gameData == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Singleton is nullptr"));
		return;
	}

	//Call the function that updates the UI with the task
	gameData->SetTaskText(m_TaskText);

	p_PlayerActor = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

