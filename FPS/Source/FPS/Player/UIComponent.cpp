// Fill out your copyright notice in the Description page of Project Settings.

#include "UIComponent.h"
#include "Widget.h"
#include "WorldCollision.h"
#include "DrawDebugHelpers.h"
#include "Level/BasicPickup.h"
#include "GameFramework/PlayerController.h"


// Sets default values for this component's properties
UUIComponent::UUIComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UUIComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UUIComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (m_CurrentUIMode == EUIMode::Inventory)
	{
		LookForObjects();
	}
}

void UUIComponent::Initialize(TArray<UWidget*> GameUI, TArray<UWidget*> PauseUI, TArray<UWidget*> InventoryUI)
{
	m_InGameUI = GameUI;
	m_PauseUI = PauseUI;
	m_InventoryUI = InventoryUI;

	SwitchMode(EUIMode::Game);
}

void UUIComponent::SwitchMode(EUIMode NewUIMode)
{



	// We do a toggle
	if (m_CurrentUIMode == NewUIMode)
	{
		m_CurrentUIMode = EUIMode::Game;
	}
	else
	{
		m_CurrentUIMode = NewUIMode;
	}

	switch (m_CurrentUIMode)
	{
	case Game:
		ToggleMouse(false);
		DisableWidgets(m_PauseUI);
		DisableWidgets(m_InventoryUI);
		EnableWidgets(m_InGameUI);
		break;
	case Pause:
		ToggleMouse(true);
		DisableWidgets(m_InGameUI);
		DisableWidgets(m_InventoryUI);
		EnableWidgets(m_PauseUI);
		break;
	case Inventory:
		ToggleMouse(true);
		DisableWidgets(m_InGameUI);
		DisableWidgets(m_PauseUI);
		EnableWidgets(m_InventoryUI);
		break;
	default:
		break;
	}
}

void UUIComponent::DropToIventory(ABasicPickup* Pickup)
{
	m_InvetoryItems.Add(Pickup);
}

void UUIComponent::DisableWidgets(TArray<UWidget*> ToDisable)
{
	for (int32 i = 0; i != ToDisable.Num(); ++i)
	{
		ToDisable[i]->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UUIComponent::EnableWidgets(TArray<UWidget*> ToEnable)
{
	for (int32 i = 0; i != ToEnable.Num(); ++i)
	{
		ToEnable[i]->SetVisibility(ESlateVisibility::Visible);
	}
}

void UUIComponent::LookForObjects()
{
	TArray<FOverlapResult> outHits;
	FVector originPoint = GetOwner()->GetActorLocation();
	FCollisionShape collisionShape = FCollisionShape::MakeSphere(m_SearchDistance);

	TArray<ABasicPickup*> pickups;

	if (bDebug)
	{
		DrawDebugSphere(GetWorld(), originPoint, m_SearchDistance, 100, FColor::Yellow, false);
	}

	bool gotHits = GetWorld()->OverlapMultiByChannel(outHits, originPoint, FQuat::Identity, ECC_Visibility, collisionShape);

	if (gotHits)
	{
		for (int32 i = 0; i != outHits.Num(); ++i)
		{
			if (ABasicPickup* pickUp = Cast<ABasicPickup>(outHits[i].Actor))
			{
				pickups.Add(pickUp);
			}
		}
	}

		OnUpdateInventory.Broadcast(pickups);
}

void UUIComponent::ToggleMouse(const bool Enable)
{
	APlayerController* playerController = GetWorld()->GetFirstPlayerController();

	if (playerController == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("There is no player controller"));
		return;
	}

	//Set Input mode
	if (Enable)
		playerController->SetInputMode(FInputModeGameAndUI());
	else
		playerController->SetInputMode(FInputModeGameOnly());

	//Toggle mouse values with parameters
	playerController->bShowMouseCursor = Enable;
	playerController->bEnableClickEvents = Enable;
	playerController->bEnableMouseOverEvents = Enable;
}

