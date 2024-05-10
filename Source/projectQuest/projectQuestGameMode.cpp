// Copyright Epic Games, Inc. All Rights Reserved.

#include "projectQuestGameMode.h"
#include "projectQuestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AprojectQuestGameMode::AprojectQuestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
