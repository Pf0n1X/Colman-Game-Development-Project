// Copyright Epic Games, Inc. All Rights Reserved.

#include "Game_Dev_ProjGameMode.h"
#include "Game_Dev_ProjPlayerController.h"
#include "Game_Dev_ProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGame_Dev_ProjGameMode::AGame_Dev_ProjGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGame_Dev_ProjPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}