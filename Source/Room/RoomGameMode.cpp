// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RoomGameMode.h"
#include "RoomPlayerController.h"
#include "RoomCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARoomGameMode::ARoomGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARoomPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}