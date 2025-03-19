// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Muro_de_concreto.h"
#include "BomberMan_012025GameMode.generated.h"

UCLASS(minimalapi)
class ABomberMan_012025GameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
    ABomberMan_012025GameMode();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Function to spawn concrete walls
    void SpawnConcreteWall();

    // Function to destroy concrete walls
    void DestroyConcreteWall();

    // Function to handle the cycle of spawning and destroying
    void HandleWallCycle();

    // Timer handle for spawning and destroying
    FTimerHandle WallCycleTimerHandle;

    // Interval between spawns and destruction
    UPROPERTY(EditAnywhere)
    float WallCycleInterval = 5.0f;

    // Exact spawn location
    UPROPERTY(EditAnywhere)
    FVector SpawnLocation = FVector(1500.0f, 1000.0f, 50.0f); // Default location

    // Array to store references to the spawned walls
    UPROPERTY()
    TArray<AMuro_de_concreto*> SpawnedWalls;
};


