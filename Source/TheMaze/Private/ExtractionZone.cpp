#include "ExtractionZone.h"
#include "Components/BoxComponent.h"

// Sets default values
AExtractionZone::AExtractionZone()
{
	OverlapComp = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComp"));
	OverlapComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	OverlapComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	OverlapComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	OverlapComp->SetCollisionProfileName("Trigger_V2");
	OverlapComp->SetBoxExtent(FVector(32.f, 32.f, 32.f)); //Size of the box (XYZ)
	RootComponent = OverlapComp; 

	OverlapComp->SetHiddenInGame(false); // Shows object lines in game 

	// *TEST FUNCTION - Trying different method* 
	//OverlapComp->OnComponentBeginOverlap.AddDynamic(this, AExtractionZone::HandleOverlap); // AddDynamic is a macro that "unfold" into a function, intellisence dont see it
}


void AExtractionZone::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("Pawn overlapped with extractione zone"));
}
