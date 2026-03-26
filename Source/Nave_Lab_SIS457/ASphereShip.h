// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ASphereShip.generated.h"

UENUM(BlueprintType)
enum class EOrchestState : uint8
{
	RandomMovement UMETA(DisplayName = "Movimiento Aleatorio"),
	FormingCircle UMETA(DisplayName = "Formando el Círculo"),
	PauseAndSpin UMETA(DisplayName = "Pausando y Girando"),
	Converging UMETA(DisplayName = "Convergiendo al Centro"),
	StarAndYingYang UMETA(DisplayName = "Estrella y Yin Yang")
};

UCLASS()
class NAVE_LAB_SIS457_API AASphereShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AASphereShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Le asignamos un cuerpo a la nave, esfera en este caso
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	class UStaticMeshComponent* SphereMesh;

	// Por defecto de Unreal, le dá físicas a la nave ideales para nuestro caso
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	class UFloatingPawnMovement* MovementComponent;

	// Proverbial Cerebro
	// EditAnywhere nos permitirá modificarlo desde el editor
	UPROPERTY(EditAnywhere, Category = "Configuracion Coreo")
	float MovementSpeed = 500.0f;

	// Variable que guardará el target (x, y, z) al que va la nave
	// No es UPROPERTY porque lo definiremos por código (Mates de guinxu xd)
	FVector TargetLocation;

	FVector FocusCenter; // Centro orbitado por las esferas
	float CurrentAngle; 
	float CurrentRadius;
	float CurrentSpinSpeed;


	bool yingyang = false;
	// Nos permitirá saber en que parte de la coreo está la nave actual
	// Recordar el Enum que definimos al inicio
	UPROPERTY(VisibleAnywhere, Category = "Configuracion Coreo")
	EOrchestState CurrentState;

	// No conozco el límite del mundo, por eso el EditAnywhere, para que podamos modificarlo desde el editor
	UPROPERTY(EditAnywhere, Category = "Configuracion Coreo")
	float RangoMinimoX = -1500.0f;

	UPROPERTY(EditAnywhere, Category = "Configuracion Coreo")
	float RangoMaximoX = 1500.0f;

	UPROPERTY(EditAnywhere, Category = "Configuracion Coreo")
	float RangoMinimoY = -1500.0f;

	UPROPERTY(EditAnywhere, Category = "Configuracion Coreo")
	float RangoMaximoY = 1500.0f;

private:
	void SetNewRandomTarget();
};
