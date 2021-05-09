// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPowerup.generated.h"

UCLASS()
class THEMAZE_API ASPowerup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPowerup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	float PowerupInterval; // Time between powerup ticks

	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	int32 TotalNrOfTicks;  // Total time the powerup is applied

	FTimerHandle TimerHandle_PowerupTick;

	int32 TicksProccessed; // Total number of ticks applied

	UFUNCTION()
	void OnTickPowerup();

public:

	void ActivatePowerup(); 

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnActivated(); 

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnPowerupTicked(); 

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnExpired(); 
};
