// Fill out your copyright notice in the Description page of Project Settings.

#include "ActivateActors.h"


// Sets default values
AActivateActors::AActivateActors()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActivateActors::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActivateActors::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActivateActors::StartBehaviour()
{
	int32 arraySize = m_ActorsToDisable.Num();
	for (int32 i = 0; i != arraySize; ++i)
	{
		m_ActorsToDisable[i]->SetActorHiddenInGame(true);
	}

	arraySize = m_ActorsToEnable.Num();
	for (int32 i = 0; i != arraySize; ++i)
	{
		m_ActorsToEnable[i]->SetActorHiddenInGame(false);
	}
}

