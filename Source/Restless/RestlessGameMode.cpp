// Copyright Epic Games, Inc. All Rights Reserved.

#include "RestlessGameMode.h"
#include "RestlessCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARestlessGameMode::ARestlessGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
