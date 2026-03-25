// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NixAbstractRadio.h"
#include "NixOnStartRadio.generated.h"

/**
 * 
 */
UCLASS()
class NIXHOMEWORK3_API ANixOnStartRadio : public ANixAbstractRadio
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
