#include "ExtractionZone.h"
#include "Components/BoxComponent.h"



// Sets default values
AExtractionZone::AExtractionZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	OverlapComp = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComp"));
	OverlapComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	OverlapComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	OverlapComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	OverlapComp->SetBoxExtent(FVector(200.0f)); //Size of the box (XYZ)
	RootComponent = OverlapComp;

	OverlapComp->SetHiddenInGame(false); // Shows object lines in game 

	// *TEST FUNCTION - Trying different method* 
	OverlapComp->OnComponentBeginOverlap.AddDynamic(this, AExtractionZone::HandleOverlap); // AddDynamic is a macro that "unfold" into a function, intellisence dont see it 

}

void AExtractionZone::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("Pawn overlapped with extractione zone"));
}
