// Fill out your copyright notice in the Description page of Project Settings.

#include "UIComponent.h"
#include "Widget.h"
#include "WorldCollision.h"
#include "DrawDebugHelpers.h"
#include "Level/BasicPickup.h"
#include "Level/HoldAblePickUp.h"
#include "FPSPlayer.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


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
	m_Player = Cast<AFPSPlayer>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
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

	//Switch mode to the in game UI
	SwitchMode(EUIMode::Game);
}

void UUIComponent::SwitchMode(EUIMode NewUIMode)
{
	// We do a toggle to game if we are this new mode allready
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
	if (Pickup == nullptr)
	{
		return;
	}

	//Remove from inventory first if it was already in there
	if (m_InvetoryItems.Contains(Pickup)) //Can afford a heavy operation because we won't be doing this every frame
	{
		if (Pickup->GetFSlotImage() != nullptr)
		{
			ResetImage(Pickup->GetFSlotImage());
			RemoveOverlap(Pickup->GetFSlotImage());
		}

		RemoveFromInventory(Pickup);
	}
	//The pickup is not in the inventory yet
	else if (!m_InvetoryItems.Contains(Pickup))
	{
		Pickup->SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
		Pickup->SetActorHiddenInGame(true);
	}

	//If this pick up is currently held we remove it from the hands
	if (m_CurrentHoldPickUp == Pickup)
	{
		m_CurrentHoldPickUp = nullptr;
		OnHandClear.Broadcast();
	}


	//Before this function is called the blueprint slot makes sure this slot is available
	//This is done by calling IsAvailable() from blueprint

	SetImage(Pickup->GetInventoryImage(), Row, Collum, Pickup->GetSlotSize());
	Rows[Row].SlotImage[Collum].Pickup = Pickup;
	CalculateOverlap(Pickup, Row, Collum);
	SetSlotImage(Row, Collum, Pickup);
	m_InvetoryItems.Add(Pickup);

	UE_LOG(LogTemp, Warning, TEXT("%s: Added to inventory"), *Pickup->GetName());
}

bool UUIComponent::DropToHands(AHoldAblePickUp * Pickup)
{
	if (m_Player == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("There is no player"));
		return false;
	}

	//If item from inventory to hands clear Inventory image first
	if (m_InvetoryItems.Contains(Pickup))
	{
		ResetImage(Pickup->GetFSlotImage());
		RemoveOverlap(Pickup->GetFSlotImage());
	}
	else
	{
		m_InvetoryItems.Add(Pickup);
		Pickup->SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
		Pickup->SetActorHiddenInGame(true);
	}

	//Add the pickup to the hands
	m_CurrentHoldPickUp = Pickup;
	Pickup->ToHands(m_Player);

	return true;
}

void UUIComponent::RemoveFromInventory(ABasicPickup * Pickup)
{
	//Remove the item from the inventory
	m_InvetoryItems.Remove(Pickup);

	//Clear the visuals of the item
	if (Pickup->GetFSlotImage() != nullptr)
	{
		ResetImage(Pickup->GetFSlotImage());
		RemoveOverlap(Pickup->GetFSlotImage());
	}

	Pickup->SetFSlotImage(nullptr);
}

void UUIComponent::DropItem(ABasicPickup* Pickup)
{
	RemoveFromInventory(Pickup);
	
	//Calculate drop position of pickup in front of player
	FVector dropLocation;
	dropLocation = GetOwner()->GetActorLocation() + (GetOwner()->GetActorForwardVector() * 100.0f);

	FHitResult hitResult;
	bool gotHit = GetWorld()->LineTraceSingleByChannel(hitResult, dropLocation, (dropLocation - FVector(0, 0, 500)), ECC_Visibility);
	if (gotHit)
	{
		dropLocation = hitResult.Location;
	}

	//Set the pickup to the drop location and make it visible
	Pickup->SetActorLocation(dropLocation);
	Pickup->SetActorHiddenInGame(false);

	//If item is being dropped from hands clear hands
	if (Pickup == m_CurrentHoldPickUp)
	{
		m_CurrentHoldPickUp = nullptr;
		OnHandClear.Broadcast();
	}
}

void UUIComponent::DisableWidgets(TArray<UWidget*> ToDisable)
{
	//Small optimalization to not have to call .Num() every loop
	int32 disableNum = ToDisable.Num();
	for (int32 i = 0; i != disableNum; ++i)
	{
		ToDisable[i]->SetVisibility(ESlateVisibility::Hidden);
	} 
}

void UUIComponent::EnableWidgets(TArray<UWidget*> ToEnable)
{
	//Small optimalization to not have to call .Num() every loop
	int32 enableNum = ToEnable.Num();
	for (int32 i = 0; i != enableNum; ++i)
	{
		ToEnable[i]->SetVisibility(ESlateVisibility::Visible);
	}
}

void UUIComponent::LookForObjects()
{
	//Overlap value's
	TArray<FOverlapResult> outHits;
	FVector originPoint = GetOwner()->GetActorLocation();
	FCollisionShape collisionShape = FCollisionShape::MakeSphere(m_SearchDistance);
	TArray<ABasicPickup*> pickups;

	//We call this if debug is checked
	if (bDebug)
	{
		DrawDebugSphere(GetWorld(), originPoint, m_SearchDistance, 100, FColor::Yellow, false);
	}

	//Overlap check for pickups
	bool gotHits = GetWorld()->OverlapMultiByChannel(outHits, originPoint, FQuat::Identity, ECC_Visibility, collisionShape);
	if (gotHits)
	{
		int32 outHitsAmount = outHits.Num();
		for (int32 i = 0; i != outHitsAmount; ++i)
		{
			if (ABasicPickup* pickUp = Cast<ABasicPickup>(outHits[i].Actor))
			{
				//Add found item to the pickup array
				pickups.Add(pickUp);
			}
		}
	}

	//Broadcast the found items to the interested classes/blueprint
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
	//Small optimalization to not have to call .Num() every loop
	int32 rowAmount = Rows.Num();
	for (int32 i = 0; i != rowAmount; ++i)
	{
		int32 collumAmount = Rows[i].CollumImages.Num();
		for (int32 j = 0; j != collumAmount; ++j)
		{
			//Hide the image from the player and add it to the array
			FSlotImage slotImage;
			slotImage.Image = Rows[i].CollumImages[j];
			Rows[i].SlotImage.Add(slotImage);

			Rows[i].SlotImage[j].Image->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

void UUIComponent::SetImage(UTexture2D* Texture, int32 Row, int32 Collum, FVector2D GridSize)
{
	//Set the image to the desired texture
	Rows[Row].SlotImage[Collum].Image->SetBrushFromTexture(Texture, true);
	Rows[Row].SlotImage[Collum].Image->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	//Set the size from the image so it overlaps the needed slots
	UCanvasPanelSlot* slot = Cast<UCanvasPanelSlot>(Rows[Row].SlotImage[Collum].Image->Slot);
	if (slot)
		slot->SetSize(GridSize * 100);
	
}

void UUIComponent::SetSlotImage(int32 Row, int32 Collum, ABasicPickup * Pickup)
{
	Pickup->SetFSlotImage(&Rows[Row].SlotImage[Collum]);
}

void UUIComponent::ResetImage(class UTexture2D* Texture, int32 Row, int32 Collum, FVector2D GridSize)
{
	//Reset the image to the desired texture and hide it from the player
	Rows[Row].SlotImage[Collum].Image->SetBrushFromTexture(Texture, true);
	Rows[Row].SlotImage[Collum].Image->SetVisibility(ESlateVisibility::Hidden);
}

void UUIComponent::ResetImage(FSlotImage* SlotImage)
{
	//Reset image and hide it from player
	SlotImage->Image->SetBrushFromTexture(m_DefaultImage, true);
	SlotImage->Image->SetVisibility(ESlateVisibility::Hidden);
}

bool UUIComponent::IsAvailable(int32 Row, int32 Collum, FVector2D GridSize)

{
	//If the item is going outside the border
	if (Row + GridSize.Y > Rows.Num() || Collum + GridSize.X > Rows[Row].SlotImage.Num())
	{
		return false;
	}

	//If the item overlaps with and other item
	if (IsOverlapping(Row, Collum, GridSize))
	{
		return false;
	}

	//Return true if slot is available for this item
	return true;
}

ABasicPickup* UUIComponent::GetInventoryItem(int32 Row, int32 Collum)
{
	FVector2D slotPosition = { (float)Collum, (float)Row };
	ABasicPickup* pickupToReturn = nullptr;

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
					pickupToReturn = Rows[i].SlotImage[j].Pickup;
				}
			}
		}
	}
	
	//Return the item belonging to this image position
	return pickupToReturn;
}

bool UUIComponent::IsButtonTaken(int32 Row, int32 Collum) const
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
					//Return true of this slot is already used by an other item
					return true;
				}
			}
		}
	}

	return false;
}

bool UUIComponent::IsOverlapping(int32 Row, int32 Collum, FVector2D SlotSize) const
{
	//Loop through possible overlapped slots for this item
	for (int i = 0; i < SlotSize.Y; ++i)
	{
		for (int j = 0; j < SlotSize.X; ++j)
		{
			if (IsButtonTaken(Row + i, Collum + j))
			{
				//Return true if slot is taken
				return true;
			}
		}
	}

	return false;
}

void UUIComponent::CalculateOverlap(ABasicPickup* Pickup, int32 Row, int32 Collum)
{	
	//Small optimalization to not have to call the get function every loop
	int32 slotSizeX = Pickup->GetSlotSize().X;
	int32 slotSizeY = Pickup->GetSlotSize().Y;
	for (int32 i = 0; i != slotSizeX; ++i)
	{
		for (int32 j = 0; j != slotSizeY; ++j)
		{
			//Add overlapping slots to the item
			FVector2D overlappingSlot = { (float)Collum + i, (float)Row + j };
			Rows[Row].SlotImage[Collum].OverlappingSlots.Add(overlappingSlot);
		}
	}
}

void UUIComponent::RemoveOverlap(FSlotImage * SlotImage)
{
	//Clear all the overlap from an item
	SlotImage->OverlappingSlots.Empty();
}

