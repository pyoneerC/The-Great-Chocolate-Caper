// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheGreatChocolateGameMode.h"
#include "TheGreatChocolateBall.h"

ATheGreatChocolateGameMode::ATheGreatChocolateGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ATheGreatChocolateBall::StaticClass();
}
