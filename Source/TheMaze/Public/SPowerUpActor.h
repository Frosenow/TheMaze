// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPowerUpActor.generated.h"

class USphereComponent;
class UDecalComponent; 

UCLASS()
class THEMAZE_API ASPowerUpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPowerUpActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComp; 

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UDecalComponent* DecalComp; 



public:

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override; 
};