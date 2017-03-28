// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PretendEmpires.h"
#include "PretendEmpiresGameMode.h"
#include "PretendEmpiresPlayerController.h"
#include "PretendEmpiresCharacter.h"

APretendEmpiresGameMode::APretendEmpiresGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = APretendEmpiresPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}