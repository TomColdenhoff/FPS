// Fill out your copyright notice in the Description page of Project Settings.

#include "Activate.h"
#include "../Public/GameData.h"
#include "../Level/ActivateActor.h"
#include "Engine.h"


// Sets default values
AActivate::AActivate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActivate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActivate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AActivate::Update()
{
	if (m_IsActivated)
		return true;

	return false;
}

void AActivate::OnTaskEnd()
{
}

void AActivate::OnTaskStart()
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

	//Subscribe to activate delegate
	TArray<UActivateActor*> activateComponents;
	p_ActorToActivate->GetComponents<UActivateActor>(activateComponents);

	if (activateComponents[0] != nullptr)
	{
		Cast<UActivateActor>(activateComponents[0])->OnActivate.BindUObject(this, &AActivate::OnObjectActivate);
	}
}

void AActivate::OnObjectActivate()
{
	m_IsActivated = true;
}

