// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NixAbstractRadio.h"
#include "NixOnOverlapRadio.generated.h"

class UBoxComponent;

/**
 * 
 */
UCLASS()
class NIXHOMEWORK3_API ANixOnOverlapRadio : public ANixAbstractRadio
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* Box;
	
	// Sets default values for this actor's properties
	ANixOnOverlapRadio();
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
protected:
	UFUNCTION()
	void OnBoxBeginOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
};
