// Copyright Epic Games, Inc. All Rights Reserved.

#include "EOS_UE5_Test1GameMode.h"
#include "EOS_UE5_Test1Character.h"
#include "UObject/ConstructorHelpers.h"

AEOS_UE5_Test1GameMode::AEOS_UE5_Test1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
