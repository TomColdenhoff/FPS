// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "ToolWindowStyle.h"

class FToolWindowCommands : public TCommands<FToolWindowCommands>
{
public:

	FToolWindowCommands()
		: TCommands<FToolWindowCommands>(TEXT("ToolWindow"), NSLOCTEXT("Contexts", "ToolWindow", "ToolWindow Plugin"), NAME_None, FToolWindowStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};