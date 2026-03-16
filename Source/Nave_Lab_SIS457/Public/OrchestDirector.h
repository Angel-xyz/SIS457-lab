// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../ASphereShip.h"
#include "OrchestDirector.generated.h"

UCLASS()
class NAVE_LAB_SIS457_API AOrchestDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOrchestDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame

	UPROPERTY(EditAnywhere, Category = "Orchestra Config")
	TSubclassOf<AASphereShip> ShipClasstoSpawn;

	UPROPERTY(EditAnywhere, Category = "Orchestra Config")
	int32 NumberOfShips = 20;

	UPROPERTY(VisibleAnywhere, Category = "Orchestra Config")
	TArray<AASphereShip*> Fleet; // Flota en inglés, suena chido

	FTimerHandle OrchestraTimerHandle;

	UFUNCTION()
	void StartCircleFormation();

	FTimerHandle SpinTimerHandle;

	UFUNCTION()
	void StartSpinning();

	FTimerHandle ConvergeTimerHandle;
	FTimerHandle StarTimerHandle;
	FTimerHandle ResetTimerHandle;

	UFUNCTION()
	void StartConverging();

	UFUNCTION()
	void StartStarYingYang();

	UFUNCTION()
	void ResetOrchestra();

};
