// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/CFPSCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"



// Sets default values
ACFPSCharacter::ACFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(RootComponent); //Setting hierarchy for components, the RootComponent is the main Component in hierarchy 

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp")); 
	CameraComp->SetupAttachment(SpringArmComp);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMeshComp")); 
	MeshComp->SetupAttachment(RootComponent); 

	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;
}


void ACFPSCharacter::MoveForward(float Value)
{
	//Controller is a method in Pawn Class
	//Controller currently possessing the Actor
	if ((Controller) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation(); //Pitch - Y Axis, Yawn - Z Axis, Roll - X Axis 
		const FRotator YawRotation(0, Rotation.Yaw, 0); //X, Y, Z

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value); //Value = Speed
	}
}

void ACFPSCharacter::MoveRight(float Value)
{
	if ((Controller) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation(); //Pitch - Y Axis, Yawn - Z Axis, Roll - X Axis 
		const FRotator YawRotation(0, Rotation.Yaw, 0); //X, Y, Z

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void ACFPSCharacter::TurnUpRate(float Value)
{
	AddControllerYawInput(Value * BaseTurnRate * GetWorld()->GetDeltaSeconds()); //Delta seconds make frame rate independent
}

void ACFPSCharacter::LookUpAtRate(float Value)
{
	AddControllerPitchInput(Value * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}


// Called to bind functionality to input
void ACFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Jump is a built in function of ACharacter class 
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACFPSCharacter::MoveRight);

	//AActor is a child class of APawn 
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("TurnRate", this, &ACFPSCharacter::TurnUpRate);
	PlayerInputComponent->BindAxis("LookRate", this, &ACFPSCharacter::LookUpAtRate);






}

