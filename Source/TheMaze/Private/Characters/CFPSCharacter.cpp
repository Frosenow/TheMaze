#include "Characters/CFPSCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "DrawDebugHelpers.h"
#include "InteractInterface.h"



// Sets default values
ACFPSCharacter::ACFPSCharacter()
{
 	// Set this character to call Tick() every frame. 
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(RootComponent); //Setting hierarchy for components, the RootComponent is the main Component in hierarchy 

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp")); 
	CameraComp->SetupAttachment(SpringArmComp);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMeshComp")); 
	MeshComp->SetupAttachment(RootComponent); 

	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;
	TraceDistance = 2000;
	iScore = 0; 
}


void ACFPSCharacter::Tick(float DeltaTime)
{
	TraceForward();  
}

void ACFPSCharacter::MoveForward(float Value)
{
	// Controller is a method in Pawn Class
	// Controller currently possessing the Actor
	if ((Controller) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation(); // Pitch - Y Axis, Yawn - Z Axis, Roll - X Axis 
		const FRotator YawRotation(0, Rotation.Yaw, 0); // X, Y, Z

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value); //Value = Speed
	}
}

void ACFPSCharacter::MoveRight(float Value)
{
	if ((Controller) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation(); // Pitch - Y Axis, Yawn - Z Axis, Roll - X Axis 
		const FRotator YawRotation(0, Rotation.Yaw, 0); // X, Y, Z

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void ACFPSCharacter::TurnUpRate(float Value)
{
	AddControllerYawInput(Value * BaseTurnRate * GetWorld()->GetDeltaSeconds()); // Delta seconds make frame rate independent
}

void ACFPSCharacter::LookUpAtRate(float Value)
{
	AddControllerPitchInput(Value * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

// Calls the TraceForward_Implementation() directly from Blueprint
void ACFPSCharacter::InteractPressed()
{
	TraceForward(); 
	if (FocusedActor)
	{
		IInteractInterface* Interface = Cast<IInteractInterface>(FocusedActor);
		if (Interface)
		{
			Interface->Execute_OnInteract(FocusedActor, this);
		}
	}
	
}

// Finds the character viewpoint and trace forward into the world
void ACFPSCharacter::TraceForward_Implementation()
{
	FVector Loc;
	FRotator Rot;
	FHitResult Hit;

	GetController()->GetPlayerViewPoint(Loc, Rot);

	FVector Start = Loc;
	FVector End = Start + (Rot.Vector() * TraceDistance);

	FCollisionQueryParams TraceParams;
	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

	//DrawDebugLine(GetWorld(), Start, End, FColor::Orange, false, 2.0f);

	// Create HitBox if TraceLine hit object (check if the actor hit an object) 
	if (bHit)
	{
		//DrawDebugBox(GetWorld(), Hit.ImpactPoint, FVector(8, 8, 8), FColor::Red, false, 2.0f);

		AActor* Interactable = Hit.GetActor(); // Reference to what the actor hitted 

		if (Interactable)
		{
			if (Interactable != FocusedActor) // Check if ther is any "FocusedActor" 
			{
				if (FocusedActor)
				{
					IInteractInterface* Interface = Cast<IInteractInterface>(FocusedActor);
					if (Interface)
					{
						Interface->Execute_EndFocus(FocusedActor); 
					}
				}
				IInteractInterface* Interface = Cast<IInteractInterface>(Interactable);
				if (Interface)
				{
					Interface->Execute_StartFocus(Interactable);
				}
				FocusedActor = Interactable; 
				
			}
		}
		else
		{
			if (FocusedActor)
			{
				IInteractInterface* Interface = Cast<IInteractInterface>(FocusedActor);
				if (Interface)
				{
					Interface->Execute_EndFocus(FocusedActor);
				}
			}
			FocusedActor = nullptr; 
		}
	}
}

// Called to bind functionality keys to input
void ACFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Jump is a built in function of ACharacter class 
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, &ACFPSCharacter::InteractPressed);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACFPSCharacter::MoveRight);
	

	// AActor is a child class of APawn 
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("TurnRate", this, &ACFPSCharacter::TurnUpRate);
	PlayerInputComponent->BindAxis("LookRate", this, &ACFPSCharacter::LookUpAtRate);






}

