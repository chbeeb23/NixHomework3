// Fill out your copyright notice in the Description page of Project Settings.


#include "NixAbstractRadio.h"

#include "Components/AudioComponent.h"

// Sets default values
ANixAbstractRadio::ANixAbstractRadio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SceneRoot->SetupAttachment(RootComponent);
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(SceneRoot);
	
	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	Audio->SetupAttachment(SceneRoot);
}

void ANixAbstractRadio::BeginPlay()
{
	Super::BeginPlay();
	
	TurnOff(true);
}

void ANixAbstractRadio::TurnOff_Implementation(bool Off)
{
	if (Audio)
	{
		Audio->SetPaused(Off);
	}
}

