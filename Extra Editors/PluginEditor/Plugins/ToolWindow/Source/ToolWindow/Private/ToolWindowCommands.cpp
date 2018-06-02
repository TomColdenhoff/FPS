// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ToolWindowCommands.h"

#define LOCTEXT_NAMESPACE "FToolWindowModule"

void FToolWindowCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "ToolWindow", "Bring up ToolWindow window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
