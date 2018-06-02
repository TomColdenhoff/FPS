// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CoverPointGeneratorCommands.h"

#define LOCTEXT_NAMESPACE "FCoverPointGeneratorModule"

void FCoverPointGeneratorCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "CoverPointGenerator", "Bring up CoverPointGenerator window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
