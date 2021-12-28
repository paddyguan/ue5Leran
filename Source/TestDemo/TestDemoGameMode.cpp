// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestDemoGameMode.h"
#include "TestDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestDemoGameMode::ATestDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
