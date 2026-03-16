// Copyright Epic Games, Inc. All Rights Reserved.

#include "Nave_Lab_SIS457GameMode.h"
#include "Nave_Lab_SIS457Pawn.h"

ANave_Lab_SIS457GameMode::ANave_Lab_SIS457GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ANave_Lab_SIS457Pawn::StaticClass();
}

