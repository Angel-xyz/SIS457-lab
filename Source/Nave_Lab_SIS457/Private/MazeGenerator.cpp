// Fill out your copyright notice in the Description page of Project Settings.

#include "MazeGenerator.h"
#include "MazeWall.h"
#include "EngineUtils.h"

// Sets default values
AMazeGenerator::AMazeGenerator()
{
 	

}

// Called when the game starts or when spawned
void AMazeGenerator::BeginPlay()
{
	Super::BeginPlay();
	for (TActorIterator<AMazeWall> iWall(GetWorld()); iWall; ++iWall)
	{
		AMazeWall* Wall = *iWall;
		if (Wall != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("¡Éxito! Se agregó un muro a la listas"));
			MazeWalls.append(Wall);
		}
	}
	
}

void AMazeGenerator::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	MazeWalls.Empty();
}

