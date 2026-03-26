// Fill out your copyright notice in the Description page of Project Settings.


#include "ASphereShip.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/KismetMathLibrary.h"
// Sets default values
AASphereShip::AASphereShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualSphereMesh"));
	RootComponent = SphereMesh;

	SphereMesh->SetCollisionProfileName(TEXT("NoCollision"));

	SphereMesh->SetMobility(EComponentMobility::Movable);

	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("SpaceMovement"));

	MovementComponent->SetUpdatedComponent(SphereMesh);

	MovementSpeed = 500.0f;

	MovementComponent->MaxSpeed = MovementSpeed;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	CurrentState = EOrchestState::RandomMovement;

}

// Called when the game starts or when spawned
void AASphereShip::BeginPlay()
{
	Super::BeginPlay();
	if (CurrentState == EOrchestState::RandomMovement)
	{
		SetNewRandomTarget();
	}
	
}

// Called every frame
void AASphereShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (CurrentState)
	{
	case EOrchestState::RandomMovement:
	{
		FVector Direction = (TargetLocation - GetActorLocation()).GetSafeNormal();

		AddMovementInput(Direction, MovementSpeed * DeltaTime, true);

		float DistanceToTarget = FVector::Dist2D(GetActorLocation(), TargetLocation);

		if (DistanceToTarget < 100.0f)
		{
			SetNewRandomTarget();
		}
		break;
	}

	case EOrchestState::FormingCircle:
	{
		// Aquí iría la lógica para formar el círculo
		FVector CurrentPos = GetActorLocation();

		FVector NewPos = FMath::VInterpTo(CurrentPos, TargetLocation, DeltaTime, 5.0f);

		SetActorLocation(NewPos);
		break;
	}

	case EOrchestState::PauseAndSpin:
	{
		// If not yingyang, spin slower, else spin faster
		if (!yingyang)
		{
			CurrentSpinSpeed = FMath::FInterpTo(CurrentSpinSpeed, 5.0f, DeltaTime, 5.0f);
		}
		else
		{
			CurrentSpinSpeed = FMath::FInterpTo(CurrentSpinSpeed, 5.0f, DeltaTime, 9.0f);
		}
		

		CurrentAngle += 1.5 * CurrentSpinSpeed * DeltaTime;

		float X = FMath::Cos(CurrentAngle) * CurrentRadius;
		float Y = FMath::Sin(CurrentAngle) * CurrentRadius;

		FVector NewPos = FocusCenter + FVector(X, Y, 0.0f);
		NewPos.Z = GetActorLocation().Z;

		SetActorLocation(NewPos);
		break;
	}

	case EOrchestState::Converging:
	{
		CurrentRadius = FMath::FInterpTo(CurrentRadius, 50.0f, DeltaTime, 3.0f);

		CurrentSpinSpeed = FMath::FInterpTo(CurrentSpinSpeed, 8.0f, DeltaTime, 2.0f);
		CurrentAngle += 1.4 * CurrentSpinSpeed * DeltaTime;

		float X = FMath::Cos(CurrentAngle) * CurrentRadius;
		float Y = FMath::Sin(CurrentAngle) * CurrentRadius;

		FVector NewPos = FocusCenter + FVector(X, Y, 0.0f);
		NewPos.Z = GetActorLocation().Z;

		SetActorLocation(NewPos);
		break;
	}
	}

}

void AASphereShip::SetNewRandomTarget()
{
	// Elegimos un número al azar dentro de los límites X
	float NuevoX = FMath::RandRange(RangoMinimoX, RangoMaximoX);

	// Elegimos un número al azar dentro de los límites Y
	float NuevoY = FMath::RandRange(RangoMinimoY, RangoMaximoY);

	// Mantenemos el mismo eje Z (altura) que la nave ya tiene
	float AlturaZ = GetActorLocation().Z;

	// Armamos la coordenada final segura
	TargetLocation = FVector(NuevoX, NuevoY, AlturaZ);
}



