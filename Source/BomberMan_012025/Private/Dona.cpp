// Fill out your copyright notice in the Description page of Project Settings.

#include "Dona.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ADona::ADona()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear el componente de malla y asignarlo como RootComponent
	MallaDona = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaDona"));
	RootComponent = MallaDona;

	// Cargar la malla de la dona
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaDona(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

	if (ObjetoMallaDona.Succeeded())
	{
		MallaDona->SetStaticMesh(ObjetoMallaDona.Object);
		MallaDona->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	// Inicializar valores
	FloatSpeed = 5.0f;
	RotationSpeed = 10.0f;
	bPuedeMoverse = FMath::RandBool();
}

// Called when the game starts or when spawned
void ADona::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADona::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bPuedeMoverse)
	{
		FVector NewLocation = GetActorLocation();
		FRotator NewRotation = GetActorRotation();

		// Movimiento en Z aleatorio
		float DeltaHeight = FMath::FRandRange(-1.0f, 1.0f) * FloatSpeed * DeltaTime;
		NewLocation.Z += DeltaHeight;

		// Rotación aleatoria
		float DeltaRotation = FMath::FRandRange(-1.0f, 1.0f) * RotationSpeed * DeltaTime;
		NewRotation.Yaw += DeltaRotation;

		SetActorLocationAndRotation(NewLocation, NewRotation);
	}
}
