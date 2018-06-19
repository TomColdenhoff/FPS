// Fill out your copyright notice in the Description page of Project Settings.

#include "UIComponent.h"
#include "Widget.h"
#include "WorldCollision.h"
#include "DrawDebugHelpers.h"
#include "Level/BasicPickup.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"


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
	HideImageGrid();
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

void UUIComponent::DropToIventory(ABasicPickup* Pickup, int32 Row, int32 Collum)
{
	if (IsAvailable(Row, Collum, Pickup->GetSlotSize()))
	{
		SetImage(Pickup->GetInventoryImage(), Row, Collum, Pickup->GetSlotSize());
		CalculateOverlap(Pickup, Row, Collum);
		m_InvetoryItems.Add(Pickup);
	}
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

void UUIComponent::HideImageGrid()
{
	for (int32 i = 0; i != Rows.Num(); ++i)
	{
		for (int32 j = 0; j != Rows[i].CollumImages.Num(); ++j)
		{
			FSlotImage slotImage;
			slotImage.Image = Rows[i].CollumImages[j];
			Rows[i].SlotImage.Add(slotImage);

			Rows[i].SlotImage[j].Image->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

void UUIComponent::SetImage(UTexture2D* Texture, int Row, int Collum, FVector2D GridSize)
{
	Rows[Row].SlotImage[Collum].Image->SetBrushFromTexture(Texture, true);
	Rows[Row].SlotImage[Collum].Image->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	
}

void UUIComponent::ResetImage(class UTexture2D* Texture, int Row, int Collum, FVector2D GridSize)
{
	Rows[Row].SlotImage[Collum].Image->SetBrushFromTexture(Texture, true);
	Rows[Row].SlotImage[Collum].Image->SetVisibility(ESlateVisibility::Hidden);
}

bool UUIComponent::IsAvailable(int Row, int Collum, FVector2D GridSize)
{
	if (Row + GridSize.Y > Rows.Num() || Collum + GridSize.X > Rows[Row].SlotImage.Num())
	{
		return false;
	}

	if (IsButtonTaken(Row, Collum))
	{
		return false;
	}

	if (IsOverlapping(Row, Collum, GridSize))
	{
		return false;
	}

	return true;
}

bool UUIComponent::IsButtonTaken(int Row, int Collum) const
{
	FVector2D slotPosition = {(float)Collum, (float)Row};

	int32 rowNum = Rows.Num();
	//Loop through all the images
	for (int32 i = 0; i != rowNum; ++i)
	{
		int32 collumNum = Rows[i].SlotImage.Num();
		for (int32 j = 0; j != collumNum; ++j)
		{
			int32 overlapNum = Rows[i].SlotImage[j].OverlappingSlots.Num();
			for (int32 k = 0; k != overlapNum; ++k)
			{
				if (Rows[i].SlotImage[j].OverlappingSlots[k] == slotPosition)
				{
					return true;
				}
			}
		}
	}

	return false;
}

bool UUIComponent::IsOverlapping(int32 Row, int32 Collum, FVector2D SlotSize) const
{

}

void UUIComponent::CalculateOverlap(ABasicPickup* Pickup, int32 Row, int32 Collum)
{
	for (int32 i = 0; i != Pickup->GetSlotSize().X; ++i)
	{
		for (int32 j = 0; j != Pickup->GetSlotSize().Y; ++j)
		{
			FVector2D overlappingSlot = { (float)Collum + i, (float)Row + j };
			Rows[Row].SlotImage[Collum].OverlappingSlots.Add(overlappingSlot);
		}
	}
}

