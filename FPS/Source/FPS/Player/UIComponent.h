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

	UFUNCTION(BlueprintCallable)
	void DropToIventory(ABasicPickup* Pickup, int32 Row, int32 Collum);

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FUpdateOnGroundDelegate OnUpdateInventory;

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FUpdateOnGroundDelegate OnUpdateInventorySlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<FCollum> Rows;

private:
	EUIMode m_CurrentUIMode;

	TArray<UWidget*> m_InGameUI;
	TArray<UWidget*> m_PauseUI;
	TArray<UWidget*> m_InventoryUI;

	TArray<ABasicPickup*> m_InvetoryItems;

	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDebug;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float m_SearchDistance;

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
	void SetImage(class UTexture2D* Texture, int Row, int Collum, FVector2D GridSize);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void ResetImage(class UTexture2D* Texture, int Row, int Collum, FVector2D GridSize);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool IsAvailable(int Row, int Collum, FVector2D GridSize);

	/*Checks if the hovered button is overlaped by an other image*/
	bool IsButtonTaken(int Row, int Collum) const;

	/*Checks if the item is overlapping an allready placed item*/
	bool IsOverlapping(int32 Row, int32 Collum, FVector2D SlotSize) const;

	void CalculateOverlap(ABasicPickup* Pickup, int32 Row, int32 Collum);
		
	
};
