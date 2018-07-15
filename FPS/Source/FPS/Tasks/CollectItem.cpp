// Fill out your copyright notice in the Description page of Project Settings.

#include "CollectItem.h"
#include "../Public/GameData.h"
#include "Engine.h"
#include "../Player/UIComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "../FPSPlayer.h"
#include "../Level/BasicPickup.h"
#include "StartBehaviour.h"

// Sets default values
ACollectItem::ACollectItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACollectItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACollectItem::OnTaskEnd()
{
	UE_LOG(LogTemp, Warning, TEXT("Task Ended"));
}

void ACollectItem::OnTaskStart()
{
	//Get the game singleton
	UGameData* gameData = Cast<UGameData>(GEngine->GameSingleton);

	if (gameData == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Singleton is nullptr"));
		return;
	}

	//Call the function that updates the UI with the task
	gameData->SetTaskText("Collect the " + ActorToCollect->GetFName().ToString());


	AFPSPlayer* player = Cast<AFPSPlayer>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	p_Inventory = player->GetUIComponent();

	//Start a level behvaviour at the start of the task
	IStartBehaviour* behaviour = Cast<IStartBehaviour>(p_TaskBeginBehaviour);
	if (behaviour != nullptr)
		behaviour->StartBehaviour();
}

bool ACollectItem::Update()
{
	//Check for collected item in inventory
	if (p_Inventory == nullptr)
		return false;

	if (p_Inventory->ContainsItem(ActorToCollect))
	{
		return true;
	}
	
	return false;
	
}

