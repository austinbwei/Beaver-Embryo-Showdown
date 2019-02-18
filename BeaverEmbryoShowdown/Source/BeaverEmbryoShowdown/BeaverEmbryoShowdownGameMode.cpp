// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BeaverEmbryoShowdownGameMode.h"
#include "BeaverEmbryoShowdownPawn.h"

ABeaverEmbryoShowdownGameMode::ABeaverEmbryoShowdownGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ABeaverEmbryoShowdownPawn::StaticClass();
}

