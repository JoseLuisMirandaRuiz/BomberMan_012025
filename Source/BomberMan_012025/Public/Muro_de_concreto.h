//

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Muro_de_concreto.generated.h"

UCLASS()
class BOMBERMAN_012025_API AMuro_de_concreto : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AMuro_de_concreto();

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Muro_de_concretoMesh;

    UPROPERTY(EditAnywhere)
    float tiempo_De_vida = 5.0f; // Tiempo de vida del actor en segundos

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};
