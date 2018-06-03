// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FCoverPointGeneratorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command (by default it will bring up plugin window) */
	void PluginButtonClicked();
	
private:

	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);

	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

private:
	TSharedPtr<class FUICommandList> PluginCommands;

	//Checkbox functions
	TSharedRef<SWidget> CreateCheckBox(const FText CheckBoxName, bool* CheckBoxValue);
	ECheckBoxState HandleCheckBoxIsChecked(bool* CheckBockValue) const;
	void HandleCheckBoxStateChange(ECheckBoxState NewState, bool* CheckBoxValue);

	//Generate Button Function
	FReply OnGenerateButtonClick();

	//Functions needed for generating the Cover Points
	bool SettingsValid();
	bool StartGeneration();
	void GenerateRectangleCoverPoints(AActor* Actor);
	void GenerateCircularCoverPoints(AActor* Actor);
	void CreateAndPlacePoint(FVector Location, AActor* Parent, TArray<class ACoverPoint*>& OutPoints);
	void CheckPointsValid(TArray<class ACoverPoint*>& CoverPoints);

	bool bIsRectangle = false;
	bool bIsCircular = false;

	const int32 POINT_DISTANCE_CM = 50;
	const float HORIZONTAL_OFFSET = 10.0f;
	const float VERTICAL_OFFSET = 10.0f;

	const float ANGLE_DISTANCE = 60.0f;
};