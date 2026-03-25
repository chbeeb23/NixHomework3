// Fill out your copyright notice in the Description page of Project Settings.


#include "NixOnOverlapRadio.h"
#include "Components/BoxComponent.h"

ANixOnOverlapRadio::ANixOnOverlapRadio()
{
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetupAttachment(SceneRoot);
}

void ANixOnOverlapRadio::BeginPlay()
{
	Super::BeginPlay();
	
	Box->OnComponentBeginOverlap.AddDynamic(this, &ANixOnOverlapRadio::OnBoxBeginOverlap);
}

void ANixOnOverlapRadio::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	TurnOff(false);
}
