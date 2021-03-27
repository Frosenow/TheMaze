#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Collectible.generated.h"

class USphereComponent; 

UCLASS()
class ACollectible : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollectible();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "MeshComp")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "MeshComp")
	USphereComponent* SphereComp; 

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* PickupFX; 

	void PlayEffects(); 
	

public:	

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override; 
};
