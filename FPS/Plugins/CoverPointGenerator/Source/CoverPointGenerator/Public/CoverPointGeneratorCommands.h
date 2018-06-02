// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "CoverPointGeneratorStyle.h"

class FCoverPointGeneratorCommands : public TCommands<FCoverPointGeneratorCommands>
{
public:

	FCoverPointGeneratorCommands()
		: TCommands<FCoverPointGeneratorCommands>(TEXT("CoverPointGenerator"), NSLOCTEXT("Contexts", "CoverPointGenerator", "CoverPointGenerator Plugin"), NAME_None, FCoverPointGeneratorStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};