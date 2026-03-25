// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NixAbstractRadio.generated.h"

UCLASS(Abstract)
class NIXHOMEWORK3_API ANixAbstractRadio : public AActor
{
	GENERATED_BODY()
	
public:	
	
	UPROPERTY(EditDefaultsOnly)
	USceneComponent* SceneRoot;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* StaticMesh;
	
	UPROPERTY(BlueprintReadWrite)
	UAudioComponent* Audio;
	
	// Sets default values for this actor's properties
	ANixAbstractRadio();
	
	UFUNCTION(BlueprintNativeEvent)
	void TurnOff(bool Off=true);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
