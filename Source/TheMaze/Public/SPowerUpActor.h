// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPowerUpActor.generated.h"

class USphereComponent;
class UDecalComponent; 
class ASPowerup; 

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

	UPROPERTY(EditDefaultsOnly, Category = "PickupActor")
	TSubclassOf <ASPowerup> PowerUpClass; 

	ASPowerup* PowerUpInstance; 

	UPROPERTY(EditDefaultsOnly, Category = "PickupActor")
	float CoolDownDuration; 

	FTimerHandle TimerHandle_RespawnTimer; 

	void Respawn(); 


public:

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override; 
};
