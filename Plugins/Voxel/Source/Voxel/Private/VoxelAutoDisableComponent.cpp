// Fill out your copyright notice in the Description page of Project Settings.

#include "VoxelAutoDisableComponent.h"

// Sets default values
AVoxelAutoDisableComponent::AVoxelAutoDisableComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVoxelAutoDisableComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVoxelAutoDisableComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

