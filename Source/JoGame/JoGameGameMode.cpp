// Copyright Epic Games, Inc. All Rights Reserved.

#include "JoGameGameMode.h"
#include "JoGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJoGameGameMode::AJoGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
