// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "Muro.h"
#include "Dona.h"

ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan_012025GameMode::BeginPlay()
{
	Super::BeginPlay();

	// Mensajes de depuración en pantalla
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Spawn de Bloques, Muros y Luna iniciado"));
	}

	// Spawning de Bloques
	int numeroBloqueConMovimiento = 0;
	for (int i = 0; i < 10; i++)
	{
		ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(500.0f + i * 100, 2500.0f - i * 100, 20.0f), FRotator(0.0f, 0.0f, 0.0f));

		if (bloque && bloque->bPuedeMoverse)
		{
			numeroBloqueConMovimiento++;
		}

		if (numeroBloqueConMovimiento >= 2 && bloque)
		{
			bloque->bPuedeMoverse = false;
		}
	}

	// Spawning de Muros
	int numeroMuroConMovimiento = 0;
	for (int i = 0; i < 20; i++)
	{
		AMuro* muro = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), FVector(800.0f + i * 100, 3000.0f - i * 100, 40.0f), FRotator(0.0f, 0.0f, 0.0f));

		if (muro && muro->bPuedeMoverse)
		{
			numeroMuroConMovimiento++;
		}

		if (numeroMuroConMovimiento >= 4 && muro)
		{
			muro->bPuedeMoverse = false;
		}
	}

	// Spawning de una Dona
	ADona* Dona = GetWorld()->SpawnActor<ADona>(ADona::StaticClass(), FVector(1000.0f, 1000.0f, 300.0f), FRotator(0.0f, 0.0f, 0.0f));
	if (Dona)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("La dona fue creada exitosamente"));
	}
}