// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CoverPointGenerator.h"
#include "CoverPointGeneratorStyle.h"
#include "CoverPointGeneratorCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "SCheckBox.h"
#include "SButton.h"
#include "Engine/Selection.h"
#include "Editor.h"
#include "CoverPoint.h"
#include "Engine/EngineTypes.h"

static const FName CoverPointGeneratorTabName("CoverPointGenerator");

#define LOCTEXT_NAMESPACE "FCoverPointGeneratorModule"

void FCoverPointGeneratorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FCoverPointGeneratorStyle::Initialize();
	FCoverPointGeneratorStyle::ReloadTextures();

	FCoverPointGeneratorCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FCoverPointGeneratorCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FCoverPointGeneratorModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FCoverPointGeneratorModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FCoverPointGeneratorModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(CoverPointGeneratorTabName, FOnSpawnTab::CreateRaw(this, &FCoverPointGeneratorModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FCoverPointGeneratorTabTitle", "CoverPointGenerator"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FCoverPointGeneratorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FCoverPointGeneratorStyle::Shutdown();

	FCoverPointGeneratorCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(CoverPointGeneratorTabName);
}

TSharedRef<SDockTab> FCoverPointGeneratorModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SVerticalBox)

			//Start Description
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight()
			[
				SNew(STextBlock)
				.Text(LOCTEXT("CoverPointDescription1", "1: Select the shape of the Actors you want to select.")).AutoWrapText(true)
			]
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight()
			[
				SNew(STextBlock)
				.Text(LOCTEXT("CoverPointDescription2", "2: Select all the Actors you want to use.")).AutoWrapText(true)
			]
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight().Padding(0.0f, 0.0f, 0.0f, 20.0f)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("CoverPointDescription3", "3: Press Generate.")).AutoWrapText(true)
			]
			//End Description
			
			//Start Checkboxes
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight().Padding(0.0f, 0.0f, 0.0f, 20.0f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot().HAlign(HAlign_Left).AutoWidth().Padding(0.0f, 0.0f, 20.0f, 0.0f)
				[
					CreateCheckBox(FText::FromString("Is Rectangle"), &bIsRectangle)
				]
				+ SHorizontalBox::Slot().HAlign(HAlign_Left)
				[
					CreateCheckBox(FText::FromString("Is Circular"), &bIsCircular)
				]
			]
			//End CheckBoxes

			//Start Button
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight()
			[
				SNew(SButton)
				.Text(LOCTEXT("GenerateCoverPointLabel", "Generate"))
				.OnClicked_Raw(this, &FCoverPointGeneratorModule::OnGenerateButtonClick)
				.HAlign(HAlign_Center)
			]
		];
}

#pragma region CheckBox Functions
TSharedRef<SWidget> FCoverPointGeneratorModule::CreateCheckBox(const FText CheckBoxName, bool* CheckBoxValue)
{
	return SNew(SCheckBox)
		.IsChecked_Raw(this, &FCoverPointGeneratorModule::HandleCheckBoxIsChecked, CheckBoxValue)
		.OnCheckStateChanged_Raw(this, &FCoverPointGeneratorModule::HandleCheckBoxStateChange, CheckBoxValue)
		[
			SNew(STextBlock).Text(CheckBoxName)
		];
}

ECheckBoxState FCoverPointGeneratorModule::HandleCheckBoxIsChecked(bool* CheckBockValue) const
{
	return (*CheckBockValue) ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void FCoverPointGeneratorModule::HandleCheckBoxStateChange(ECheckBoxState NewState, bool* CheckBoxValue)
{
	*CheckBoxValue = (NewState == ECheckBoxState::Checked);
}
#pragma endregion

FReply FCoverPointGeneratorModule::OnGenerateButtonClick()
{
	if (!SettingsValid())
		return FReply::Unhandled();

	if (!StartGeneration())
		return FReply::Unhandled();

	return FReply::Handled();
}

bool FCoverPointGeneratorModule::SettingsValid()
{
	if ((bIsRectangle && bIsCircular) || (!bIsRectangle && !bIsCircular))
	{
		UE_LOG(LogTemp, Error, TEXT("Cover Point Generator Tool Error: Settings are not valid. Only one setting can be applied. \nSolution: (Un)Check one option."));
		return false;
	}

	return true;
}

bool FCoverPointGeneratorModule::StartGeneration()
{
	for (FSelectionIterator i(GEditor->GetSelectedActorIterator()); i; ++i)
	{
		if (AActor* actor = Cast<AActor>(*i))
		{
			GenerateCoverPoints(actor);
		}
	}

	return true;
}

void FCoverPointGeneratorModule::GenerateCoverPoints(AActor* Actor)
{
	//Save original rotation and set it to zero
	FRotator defaultActorRotation = Actor->GetActorRotation();
	Actor->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));

	FBox actorBoundingBox = Actor->GetComponentsBoundingBox();

	//We imagine a 2d actor (look from above)
	FVector leftBottom = FVector(actorBoundingBox.GetCenter().X - (actorBoundingBox.GetSize().X * 0.5f), actorBoundingBox.GetCenter().Y - (actorBoundingBox.GetSize().Y * 0.5f), actorBoundingBox.GetCenter().Z - (actorBoundingBox.GetSize().Z * 0.5f));
	FVector rightTop = FVector(actorBoundingBox.GetCenter().X + (actorBoundingBox.GetSize().X * 0.5f), actorBoundingBox.GetCenter().Y + (actorBoundingBox.GetSize().Y * 0.5f), actorBoundingBox.GetCenter().Z - (actorBoundingBox.GetSize().Z * 0.5f));

	int32 horizontalPointAmount = 0, verticalPointAmount = 0;

	int32 horizontalDistance = rightTop.X - leftBottom.X;
	int32 verticalDistance = leftBottom.Y - rightTop.Y;

	if (horizontalDistance >= 100)
		horizontalPointAmount = (horizontalDistance / POINT_DISTANCE_CM) - 1; // substract 1 because we don't want to place a object on the corner of the actor
	//else if (horizontalDistance >= 50)
		//TODO Place Point

	if (verticalDistance >= 100)
		verticalPointAmount = (verticalDistance / POINT_DISTANCE_CM) - 1; // substract 1 because we don't want to place a object on the corner of the actor

	//Calculate horizontal positions
	for (int32 i = 0; i != horizontalPointAmount; ++i)
	{
		FVector placeLocation = FVector(((leftBottom.X + POINT_DISTANCE_CM) + (POINT_DISTANCE_CM * i)), leftBottom.Y, leftBottom.Z);
		CreateAndPlacePoint(placeLocation, Actor);

		placeLocation = FVector(((rightTop.X - POINT_DISTANCE_CM) - (POINT_DISTANCE_CM * i)), rightTop.Y, rightTop.Z);
		CreateAndPlacePoint(placeLocation, Actor);
	}

	//Calcualte Vertical positions
	for (int32 i = 0; i != verticalPointAmount; ++i)
	{
		FVector placeLocation = FVector(leftBottom.X, ((leftBottom.Y + POINT_DISTANCE_CM) + (POINT_DISTANCE_CM * i)), leftBottom.Z);
		CreateAndPlacePoint(placeLocation, Actor);

		placeLocation = FVector(leftBottom.X, ((leftBottom.Y - POINT_DISTANCE_CM) - (POINT_DISTANCE_CM * i)), leftBottom.Z);
		CreateAndPlacePoint(placeLocation, Actor);
	}

	//Reset the rotation as it was before
	Actor->SetActorRotation(defaultActorRotation);
}

void FCoverPointGeneratorModule::CreateAndPlacePoint(FVector Location, AActor* Parent)
{
	AActor* CoverPoint = GEditor->GetEditorWorldContext().World()->SpawnActor(ACoverPoint::StaticClass(), &Location);
	CoverPoint->SetActorLocation(Location);
	CoverPoint->AttachToActor(Parent, FAttachmentTransformRules(EAttachmentRule::KeepWorld, false));
}

void FCoverPointGeneratorModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->InvokeTab(CoverPointGeneratorTabName);
}

void FCoverPointGeneratorModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FCoverPointGeneratorCommands::Get().OpenPluginWindow);
}

void FCoverPointGeneratorModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FCoverPointGeneratorCommands::Get().OpenPluginWindow);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCoverPointGeneratorModule, CoverPointGenerator)