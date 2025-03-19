
#include "Muro_de_concreto.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Sets default values
AMuro_de_concreto::AMuro_de_concreto()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Crear el componente de malla
    Muro_de_concretoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Muro_de_concretoMesh"));
    RootComponent = Muro_de_concretoMesh;

    // Configurar la malla como un cubo
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
    if (MeshAsset.Succeeded())
    {
        Muro_de_concretoMesh->SetStaticMesh(MeshAsset.Object);
    }

    // Establecer dimensiones del cubo (escala)
    Muro_de_concretoMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f)); // Ajusta el ancho, alto y profundidad aquí

    // Configurar tiempo de vida del Actor
    tiempo_De_vida = 5.0f; // Segundos
}

// Called when the game starts or when spawned
void AMuro_de_concreto::BeginPlay()
{
    Super::BeginPlay();

    // Establecer vida útil del Actor
    SetLifeSpan(tiempo_De_vida);
}

// Called every frame
void AMuro_de_concreto::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // (Opcional) Agrega lógica aquí si necesitas que el Actor haga algo en cada frame
}
