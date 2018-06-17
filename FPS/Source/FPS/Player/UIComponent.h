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
	void DropToIventory(ABasicPickup* Pickup);

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FUpdateOnGroundDelegate OnUpdateInventory;

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FUpdateOnGroundDelegate OnUpdateInventorySlots;

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

		
	
};
