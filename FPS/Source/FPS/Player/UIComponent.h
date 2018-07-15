// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UIComponent.generated.h"

enum EUIMode
{
	Game = 0,
	Pause,
	Inventory
};


USTRUCT(BlueprintType)
struct FSlotImage
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	class UImage* Image;

	//X is collum numer and Y is row number
	TArray<FVector2D> OverlappingSlots;

	ABasicPickup* Pickup = nullptr;
	
};

/*Collum Struct to hold array of images in that collum*/
USTRUCT(BlueprintType)
struct FCollum
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	TArray<class UImage*> CollumImages;

	TArray<FSlotImage> SlotImage;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateOnGroundDelegate, const TArray<ABasicPickup*>&, Items);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FClearHandSlot);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_API UUIComponent : public UActorComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	UUIComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/*Initializes the UI Component*/
	UFUNCTION(BlueprintCallable, Category = "UI")
	void Initialize(TArray<UWidget*> GameUI, TArray<UWidget*> PauseUI, TArray<UWidget*> InventoryUI);

	/*Switches the UI to the new mode*/
	void SwitchMode(EUIMode NewUIMode);

	/*Puts the pickup in to the inventory*/
	UFUNCTION(BlueprintCallable)
	void DropToIventory(ABasicPickup* Pickup, int32 Row, int32 Collum);

	/*Puts the pickup/inventory item in to the hands*/
	UFUNCTION(BlueprintCallable)
	bool DropToHands(class AHoldAblePickUp* Pickup);

	UFUNCTION(BlueprintCallable)
	void RemoveFromInventory(ABasicPickup* Pickup);

	UFUNCTION(BlueprintCallable)
	void DropItem(ABasicPickup* Pickup);

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FUpdateOnGroundDelegate OnUpdateInventory;

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FUpdateOnGroundDelegate OnUpdateInventorySlots;

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FClearHandSlot OnHandClear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<FCollum> Rows;

	bool ContainsItem(ABasicPickup* Item);

private:
	EUIMode m_CurrentUIMode;

	TArray<UWidget*> m_InGameUI;
	TArray<UWidget*> m_PauseUI;
	TArray<UWidget*> m_InventoryUI;

	TArray<ABasicPickup*> m_InvetoryItems;
	AHoldAblePickUp* m_CurrentHoldPickUp = nullptr;

	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDebug;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float m_SearchDistance;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	UTexture2D* m_DefaultImage;

	class AFPSPlayer* m_Player;

	/*Disables all the the passed in widgets*/
	void DisableWidgets(TArray<UWidget*> ToDisable);

	/*Enables all the passed in widgets*/
	void EnableWidgets(TArray<UWidget*> ToEnable);

	/*Looks for pickups on the ground*/
	void LookForObjects();

	void ToggleMouse(const bool Enable);

	/*Hides all the images in front of the inventory grid and put all images in a slotimage struct*/
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void HideImageGrid();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void SetImage(class UTexture2D* Texture, int32 Row, int32 Collum, FVector2D GridSize);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void SetSlotImage(int32 Row, int32 Collum, ABasicPickup* Pickup);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void ResetImage(class UTexture2D* Texture, int32 Row, int32 Collum, FVector2D GridSize);

	void ResetImage(FSlotImage* SlotImage);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool IsAvailable(int32 Row, int32 Collum, FVector2D GridSize);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	ABasicPickup* GetInventoryItem(int32 Row, int32 Collum);

	/*Checks if the hovered button is overlaped by an other image*/
	bool IsButtonTaken(int32 Row, int32 Collum) const;

	/*Checks if the item is overlapping an allready placed item*/
	bool IsOverlapping(int32 Row, int32 Collum, FVector2D SlotSize) const;

	void CalculateOverlap(ABasicPickup* Pickup, int32 Row, int32 Collum);

	void RemoveOverlap(FSlotImage* SlotImage);
		
	
};
