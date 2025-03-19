// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Muro_de_concreto.h"
#include "Bloque.h"
#include "Muro.h"
#include "Dona.h"
#include "Engine/World.h"
#include "TimerManager.h"

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

	// Iniciar el ciclo de aparición y desaparición
        HandleWallCycle();

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
//muro de concreto spawning
void ABomberMan_012025GameMode::HandleWallCycle()
{
    // Si los muros ya están presentes, destruirlos
    if (SpawnedWalls.Num() > 0)
    {
        DestroyConcreteWall();
    }
    else
    {
        // Si los muros no están presentes, generarlos
        SpawnConcreteWall();
    }

    // Configurar el temporizador para el próximo ciclo
    GetWorld()->GetTimerManager().SetTimer(WallCycleTimerHandle, this, &ABomberMan_012025GameMode::HandleWallCycle, WallCycleInterval, false);
}

void ABomberMan_012025GameMode::SpawnConcreteWall()
{
 
    for (int i = 0; i < 8; ++i)
    {
        FVector Location = SpawnLocation + FVector(i * 100.0f, 0.0f, 0.0f);
        FRotator Rotation = FRotator::ZeroRotator;
        AMuro_de_concreto* NewWall = GetWorld()->SpawnActor<AMuro_de_concreto>(AMuro_de_concreto::StaticClass(), Location, Rotation);
        SpawnedWalls.Add(NewWall);
    }

    for (int i = 0; i < 6; ++i)
    {
        FVector Location = SpawnLocation + FVector(800.0f, i * 100.0f, 0.0f);
        FRotator Rotation = FRotator::ZeroRotator;
        AMuro_de_concreto* NewWall = GetWorld()->SpawnActor<AMuro_de_concreto>(AMuro_de_concreto::StaticClass(), Location, Rotation);
        SpawnedWalls.Add(NewWall);
    }
 
    for (int i = 0; i < 3; ++i)
    {
        FVector Location = SpawnLocation + FVector((800.0f - i * 100.0f), 600.0f, 0.0f);
        FRotator Rotation = FRotator::ZeroRotator;
        AMuro_de_concreto* NewWall = GetWorld()->SpawnActor<AMuro_de_concreto>(AMuro_de_concreto::StaticClass(), Location, Rotation);
        SpawnedWalls.Add(NewWall);
    }
    
    for (int i = 0; i < 4; ++i)
    {
        FVector Location = SpawnLocation + FVector(900.0f, (600.0f - i * 100.0f), 0.0f);
        FRotator Rotation = FRotator::ZeroRotator;
        AMuro_de_concreto* NewWall = GetWorld()->SpawnActor<AMuro_de_concreto>(AMuro_de_concreto::StaticClass(), Location, Rotation);
        SpawnedWalls.Add(NewWall);
    }
}

void ABomberMan_012025GameMode::DestroyConcreteWall()
{
    for (AMuro_de_concreto* Wall : SpawnedWalls)
    {
        if (Wall)
        {
            Wall->Destroy();
        }
    }
    SpawnedWalls.Empty(); // Vaciar el array después de destruir los muros
}

