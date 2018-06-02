// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ToolWindow.h"
#include "ToolWindowStyle.h"
#include "ToolWindowCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Widgets/Input/SButton.h"
#include "SBoxPanel.h"
#include "SCheckBox.h"
#include "EngineUtils.h"
#include "Engine/Selection.h"
#include "Editor.h"

static const FName ToolWindowTabName("ToolWindow");

#define LOCTEXT_NAMESPACE "FToolWindowModule"

void FToolWindowModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FToolWindowStyle::Initialize();
	FToolWindowStyle::ReloadTextures();

	FToolWindowCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FToolWindowCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FToolWindowModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FToolWindowModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FToolWindowModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(ToolWindowTabName, FOnSpawnTab::CreateRaw(this, &FToolWindowModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FToolWindowTabTitle", "ToolWindow"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FToolWindowModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FToolWindowStyle::Shutdown();

	FToolWindowCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(ToolWindowTabName);
}

TSharedRef<SDockTab> FToolWindowModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	//FText WidgetText = FText::Format(
	//	LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
	//	FText::FromString(TEXT("FToolWindowModule::OnSpawnPluginTab")),
	//	FText::FromString(TEXT("ToolWindow.cpp"))
	//	);

	FText WidgetTextTest = FText::Format(
		LOCTEXT("WindowWidgetText", "{0}"),
		FText::FromString(TEXT("Test Mate"))
	);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight()
			[
				SNew(STextBlock)
				.Text(LOCTEXT("DescriptionText1", "1: Select the shape of the Actors you want to select.")).AutoWrapText(true)
			]
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight()
			[
				SNew(STextBlock)
				.Text(LOCTEXT("DescriptionText2", "2: Select all the Actors you want to use.")).AutoWrapText(true)
			]
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight().Padding(0.0f, 0.0f, 0.0f, 20.0f)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("DescriptionText3", "3: Press Generate.")).AutoWrapText(true)
			]
			+SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight().Padding(0.0f, 0.0f, 0.0f, 20.0f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot().HAlign(HAlign_Left).AutoWidth().Padding(0.0f, 0.0f, 20.0f, 0.0f)
				[
					CreateCheckBox(FText::FromString("Is Rectangle"), &bSelectionIsRecatangle)
				]
				+ SHorizontalBox::Slot().HAlign(HAlign_Left)
				[
					CreateCheckBox(FText::FromString("Is Circular"), &bSelectionIsCircular)
				]
			]
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight().Padding(0.0f, 0.0f, 0.0f, 20.0f)
			[
				SNew(SButton)
				.Text(LOCTEXT("GenerateCoverPointLabel", "Generate"))
				.OnClicked_Raw(this, &FToolWindowModule::OnGeneratePointClick)
				.HAlign(HAlign_Center)
			]
		];
}

FReply FToolWindowModule::OnGeneratePointClick()
{
	if (!CheckSettings())
	{
		UE_LOG(LogTemp, Error, TEXT("ToolWindow Error: Only one setting can be applied. \nSolution: Check or uncheck a setting."));
		return FReply::Unhandled();
	}

	for (FSelectionIterator i(GEditor->GetSelectedActorIterator()); i; ++i)
	{
		if (AActor* actor = Cast<AActor>(*i))
		{
			UE_LOG(LogTemp, Warning, TEXT("Selected Actor Name: %s"), *actor->GetName());
			FBox meshBox = actor->GetComponentsBoundingBox();
			UE_LOG(LogTemp, Warning, TEXT("Selected Actor Size: %s"), *meshBox.GetSize().ToString());
			UE_LOG(LogTemp, Warning, TEXT("Selected Actor Size: %s"), *meshBox.GetCenter().ToString());

			FVector leftBottom = FVector(meshBox.GetCenter().X - (meshBox.GetSize().X * 0.5f), meshBox.GetCenter().Y - (meshBox.GetSize().Y * 0.5f), meshBox.GetCenter().Z - (meshBox.GetSize().Z * 0.5f));
			FVector rightTop = FVector(meshBox.GetCenter().X + (meshBox.GetSize().X * 0.5f), meshBox.GetCenter().Y + (meshBox.GetSize().Y * 0.5f), meshBox.GetCenter().Z - (meshBox.GetSize().Z * 0.5f));

			UE_LOG(LogTemp, Warning, TEXT("LeftBottom: %s Right Top: %s"), *leftBottom.ToString(), *rightTop.ToString());
		}
	}

	return FReply::Handled();
}

TSharedRef<SWidget> FToolWindowModule::CreateCheckBox(const FText CheckBoxName, bool* CheckBoxChoice)
{
	return SNew(SCheckBox)
		.IsChecked_Raw(this, &FToolWindowModule::HandleCheckBoxIsChecked, CheckBoxChoice)
		.OnCheckStateChanged_Raw(this, &FToolWindowModule::HandleCheckBoxCheckedStateChanged, CheckBoxChoice)
		[
			SNew(STextBlock).Text(CheckBoxName)
		];
}

ECheckBoxState FToolWindowModule::HandleCheckBoxIsChecked(bool* CheckBox) const
{
	return (*CheckBox) ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void FToolWindowModule::HandleCheckBoxCheckedStateChanged(ECheckBoxState NewState, bool* CheckBoxThatChanged)
{
	*CheckBoxThatChanged = (NewState == ECheckBoxState::Checked);
}

bool FToolWindowModule::CheckSettings()
{
	if ((bSelectionIsRecatangle && bSelectionIsCircular) || (!bSelectionIsRecatangle && !bSelectionIsCircular))
		return false;

	return true;
}

void FToolWindowModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->InvokeTab(ToolWindowTabName);
}

void FToolWindowModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FToolWindowCommands::Get().OpenPluginWindow);
}

void FToolWindowModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FToolWindowCommands::Get().OpenPluginWindow);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FToolWindowModule, ToolWindow)