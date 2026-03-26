// Fill out your copyright notice in the Description page of Project Settings.


#include "OrchestDirector.h"
#include "Engine/World.h" // Para poder spawnear las naves(esferas) con GetWorld()->SpawnActor y los timers
#include "Kismet/GameplayStatics.h" // Nos permite buscar al jugador fácilmente

// Sets default values
AOrchestDirector::AOrchestDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AOrchestDirector::BeginPlay()
{
	Super::BeginPlay();
	
	if (ShipClasstoSpawn == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("ShipClasstoSpawn is not set in the OrchestDirector! Please set it in the editor."));
		return;
	}

	for (int32 i = 0; i < NumberOfShips; ++i)
	{
		float Spawnx = FMath::RandRange(-1500.0f, 1500.0f);
		float Spawny = FMath::RandRange(-1500.0f, 1500.0f);
        float Spawnz = GetActorLocation().Z;
		FVector SpawnLocation = FVector(Spawnx, Spawny, Spawnz); // Spawn around the director within a radius of 1500 units
		FRotator SpawnRotation = FRotator::ZeroRotator;

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AASphereShip* NewShip = GetWorld()->SpawnActor<AASphereShip>(ShipClasstoSpawn, SpawnLocation, SpawnRotation, SpawnParams);

		if (NewShip)
		{
			Fleet.Add(NewShip);
		}
	}
	// Empieza la melodía:
	// OrchestDirector dice: "Llama a StartCircleFormation dentro de 5.0 segundos. No lo repitas (false)".
	GetWorld()->GetTimerManager().SetTimer(OrchestraTimerHandle, this, &AOrchestDirector::StartCircleFormation, 5.0f, false);
}

void AOrchestDirector::StartCircleFormation()
{
    // Buscamos a la nave del jugador (el Pawn que controlas tú)
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (!PlayerPawn) return; // Si no hay jugador, abortamos por seguridad

    // Definimos el centro del círculo (500 unidades justo delante del jugador)
    FVector CenterLocation = PlayerPawn->GetActorLocation() + (PlayerPawn->GetActorForwardVector() * 500.0f);
    float Radius = 360.0f; // Qué tan grande será el círculo

    // Le asignamos su puesto a cada nave de la lista
    for (int32 i = 0; i < Fleet.Num(); i++)
    {
        // Revisamos que la nave siga existiendo
        if (AASphereShip* Ship = Fleet[i])
        {
            // Calculamos el ángulo que le toca a esta nave específica
            float AngleDegrees = (360.0f / Fleet.Num()) * i;
            // A la matemática de las computadoras le gustan los radianes, no los grados
            float AngleRadians = FMath::DegreesToRadians(AngleDegrees);

            // Calculamos su posición X e Y usando Seno y Coseno
            float XOffset = FMath::Cos(AngleRadians) * Radius;
            float YOffset = FMath::Sin(AngleRadians) * Radius;

            // Armamos la coordenada final
            FVector TargetPos = CenterLocation + FVector(XOffset, YOffset, 0.0f);
            TargetPos.Z = Ship->GetActorLocation().Z; // Mantenemos su altura original

            // ¡Las naves empiezan la secuencia!
            Ship->TargetLocation = TargetPos;
            Ship->CurrentState = EOrchestState::FormingCircle;

            // Preparativos para siguientes fases:
			Ship->FocusCenter = CenterLocation; // Le decimos a la nave cuál es el centro del círculo para que pueda orbitarlo después
            Ship->CurrentAngle = AngleRadians;
            Ship->CurrentRadius = Radius;
			Ship->CurrentSpinSpeed = 0.0f; // Empezamos sin velocidad de giro, la iremos aumentando después
        }
    }
    // Le decimos que despues de un segundo active de que empieze la formación del circulo, empiece a girar, no se repite
    GetWorld()->GetTimerManager().SetTimer(SpinTimerHandle, this, &AOrchestDirector::StartSpinning, 1.0f, false);
}

void AOrchestDirector::StartSpinning()
{
    // A todas las naves de la lista, les cambiamos el estado
    for (AASphereShip* Ship : Fleet)
    {
        if (Ship)
        {
            Ship->CurrentState = EOrchestState::PauseAndSpin;
        }
    }
	// Despues de dos segundos, empezamos a converger al centro, no se repite
    GetWorld()->GetTimerManager().SetTimer(ConvergeTimerHandle, this, &AOrchestDirector::StartConverging, 2.0f, false);
}

// FASE: Achicar el círculo
void AOrchestDirector::StartConverging()
{
    for (AASphereShip* Ship : Fleet)
    {
        if (Ship) Ship->CurrentState = EOrchestState::Converging;
    }

    // A 1 segundo de converger, explotamos en la Estrella y el Yin-Yang
    GetWorld()->GetTimerManager().SetTimer(StarTimerHandle, this, &AOrchestDirector::StartStarYingYang, 1.0f, false);
}

// FASE: La explosión matemática
void AOrchestDirector::StartStarYingYang()
{
    // Recuperamos el centro usando la primera nave (para no tener que buscar al jugador de nuevo)
    FVector Center = Fleet[0]->FocusCenter;

    for (int32 i = 0; i < Fleet.Num(); i++)
    {
        if (AASphereShip* Ship = Fleet[i])
        {
            if (i < NumberOfShips-2)
            {
                // LAS 18 NAVES DE LA ESTRELLA (3 naves por cada una de las 6 puntas)
                // Calculamos 6 ángulos (0, 60, 120, 180, 240, 300)
                float AngleDegrees = (i % 6) * 60.0f;
                float AngleRadians = FMath::DegreesToRadians(AngleDegrees);

                // Calculamos qué tan lejos del centro va esta nave (para formar la línea de la punta)
                float DistanceFromCenter = 400.0f + ((i / 6) * 300.0f);

                float X = FMath::Cos(AngleRadians) * DistanceFromCenter;
                float Y = FMath::Sin(AngleRadians) * DistanceFromCenter;

                Ship->TargetLocation = Center + FVector(X, Y, 0.0f);
                Ship->TargetLocation.Z = Ship->GetActorLocation().Z;

                // REUTILIZAMOS el código de interpolación para que viajen suavemente hacia la estrella
                Ship->CurrentState = EOrchestState::FormingCircle;
            }
            else
            {
                // LAS 2 NAVES DEL YIN-YANG (índices 18 y 19)
                Ship->CurrentRadius = 60.0f; // Un radio pequeño
                Ship->CurrentAngle = (i == NumberOfShips-2) ? 0.0f : PI; // Una empieza en 0 grados, la otra a 180 (PI radianes)
                Ship->CurrentSpinSpeed = 20.0f; // Que giren rapidísimo!

                // REUTILIZAMOS el código de giro
                Ship->yingyang = true;
                Ship->CurrentState = EOrchestState::PauseAndSpin;
            }
        }
    }

    // Tras 2 segundos de la estrella y YingYang, terminamos la coreo y volvemos a lo random, no se repite
    GetWorld()->GetTimerManager().SetTimer(ResetTimerHandle, this, &AOrchestDirector::StartSpinning, 2.0f, false);
    GetWorld()->GetTimerManager().SetTimer(ResetTimerHandle, this, &AOrchestDirector::ResetOrchestra, 6.0f, false);
}

// FASE FINAL: Volver al inicio
void AOrchestDirector::ResetOrchestra()
{
    for (AASphereShip* Ship : Fleet)
    {
        if (Ship)
        {
            Ship->CurrentState = EOrchestState::RandomMovement;
        }
    }
}