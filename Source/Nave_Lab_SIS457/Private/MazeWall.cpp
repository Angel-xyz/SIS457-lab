// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeWall.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"

// Sets default values
AMazeWall::AMazeWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualMesh"));
	RootComponent = Mesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> WallMesh(TEXT("/Game/Geometry/Meshes/1M_Cube.1M_Cube"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> WallMaterial(TEXT("/Game/Geometry/Meshes/CubeMaterial.CubeMaterial"));

	if (WallMesh.Succeeded())
	{
		Mesh->SetStaticMesh(WallMesh.Object);
	}
	if (WallMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, WallMaterial.Object);
	}

	Mesh->SetCollisionProfileName(TEXT("BlockAll"));

}

// Called when the game starts or when spawned
void AMazeWall::BeginPlay()
{
	Super::BeginPlay();
	
}

