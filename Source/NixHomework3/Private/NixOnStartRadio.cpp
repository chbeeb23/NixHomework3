// Fill out your copyright notice in the Description page of Project Settings.


#include "NixOnStartRadio.h"


// Called when the game starts or when spawned
void ANixOnStartRadio::BeginPlay()
{
	Super::BeginPlay();
	
	TurnOff(false);
}