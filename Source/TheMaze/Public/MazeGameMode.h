#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MazeGameMode.generated.h"


UCLASS()
class THEMAZE_API AMazeGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Spectating")
	TSubclassOf<AActor> SpectatingViewpointClass; // TSubclassOf lists only <AActor> specify classes 

public:

	void CompleteMission(APawn* MainPawn); 

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void OnMissionCompleted(APawn* MainPawn);

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void OnMissionFailed(APawn* MainPawn);
	
};
