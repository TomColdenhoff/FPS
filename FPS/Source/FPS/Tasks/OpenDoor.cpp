// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "../Public/GameData.h"
#include "Engine.h"
#include "../Level/DoorOpenComponent.h"

// Sets default values
AOpenDoor::AOpenDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOpenDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AOpenDoor::Update()
{
	if (m_DoorIsOpen)
		return true;

	return false;
}

void AOpenDoor::OnTaskEnd()
{
}

void AOpenDoor::OnTaskStart()
{
	//Get the game singleton
	UGameData* gameData = Cast<UGameData>(GEngine->GameSingleton);

	if (gameData == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Singleton is nullptr"));
		return;
	}

	//Call the function that updates the UI with the task
	gameData->SetTaskText("Unlock the door");

	//Subscribe to door open delegate
	TArray<UDoorOpenComponent*> openDoorComponents;
	p_DoorToOpen->GetComponents<UDoorOpenComponent>(openDoorComponents);

	if (openDoorComponents[0] != nullptr)
	{
		Cast<UDoorOpenComponent>(openDoorComponents[0])->OnDoorOpen.BindUObject(this, &AOpenDoor::OnDoorOpen);
	}
}

void AOpenDoor::OnDoorOpen()
{
	m_DoorIsOpen = true;
}

