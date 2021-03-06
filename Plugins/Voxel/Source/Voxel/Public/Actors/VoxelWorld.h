// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VoxelWorldInterface.h"
#include "VoxelWorld.generated.h"

UCLASS()
class VOXEL_API AVoxelWorld : public AVoxelWorldInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVoxelWorld();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
