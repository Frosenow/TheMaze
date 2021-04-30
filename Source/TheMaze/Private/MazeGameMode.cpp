#include "MazeGameMode.h"
#include "Characters/CFPSCharacter.h"
#include "Kismet/GameplayStatics.h"



void AMazeGameMode::CompleteMission(APawn* MainPawn)
{
	if (MainPawn)
	{
		MainPawn->DisableInput(nullptr); // Disable control - walking etc. - of the player (pawn)
		
		if (SpectatingViewpointClass) // Make sure that is not a nullptr
		{
			TArray <AActor*> ReturnedActors;
			UGameplayStatics::GetAllActorsOfClass(this, SpectatingViewpointClass, ReturnedActors); // Fill the TArray with Actors in the level that match SpectatingClass

			// Change viewtarget if any valid actor found
			if (ReturnedActors.Num() > 0)
			{
				AActor* NewViewTarget = ReturnedActors[0];
				APlayerController* PC = Cast<APlayerController>(MainPawn->GetController());
				if (PC)
				{
					PC->SetViewTargetWithBlend(NewViewTarget, 0.5f, EViewTargetBlendFunction::VTBlend_Cubic); // PlayerController changed to other Actor (ViewPoint)
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SpectatingViewpointClass is nullptr. Cannot change spectatig view target"));
		}
	}
	OnMissionCompleted(MainPawn);
}
