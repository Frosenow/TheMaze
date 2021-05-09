// Fill out your copyright notice in the Description page of Project Settings.


#include "SPowerup.h"

// Sets default values
ASPowerup::ASPowerup()
{
	PowerupInterval = 0.0f;
	TotalNrOfTicks = 0; 
}

// Called when the game starts or when spawned
void ASPowerup::BeginPlay()
{
	Super::BeginPlay();
}

void ASPowerup::OnTickPowerup()
{
	TicksProccessed++; 
	if (TicksProccessed >= TotalNrOfTicks)
	{
		OnExpired();

		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTick); // Clear the timer 
	}
}

void ASPowerup::ActivatePowerup()
{
	OnActivated(); 

	if (PowerupInterval > 0.0f)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick, this, &ASPowerup::OnTickPowerup, PowerupInterval, true);
	}
	else
	{
		OnTickPowerup();
	}
}


