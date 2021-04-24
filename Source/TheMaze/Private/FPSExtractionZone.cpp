#include "FPSExtractionZone.h"
#include "Components/BoxComponent.h"
#include "Characters/CFPSCharacter.h"
#include "Collectible.h"
#include "MazeGamemode.h"

// Sets default values
AFPSExtractionZone::AFPSExtractionZone()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxZone = CreateDefaultSubobject<UBoxComponent>(TEXT("ExtractionZone"));
	BoxZone->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxZone->SetCollisionResponseToAllChannels(ECR_Ignore);
	BoxZone->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	BoxZone->SetBoxExtent(FVector(150.f, 150.f, 150.f));
	BoxZone->SetCollisionProfileName("Trigger");
	RootComponent = BoxZone;

	BoxZone->SetHiddenInGame(false); // Shows object lines in game 

	// *TEST FUNCTION - Trying different method* 
	BoxZone->OnComponentBeginOverlap.AddDynamic(this, &AFPSExtractionZone::HandleOverlap); // AddDynamic is a macro that "unfold" into a function, intellisence dont see it

}

// Called when the game starts or when spawned
void AFPSExtractionZone::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFPSExtractionZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFPSExtractionZone::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	ACFPSCharacter* MyPawn = Cast<ACFPSCharacter>(OtherActor);
	if (MyPawn  && MyPawn->bIsCarryingObjective)
	{
		// Send output log if actor overlap with BoxZone and is carrying an objective
		UE_LOG(LogTemp, Log, TEXT("Pawn overlapped with extractione zone"));
		AMazeGameMode* GM = Cast<AMazeGameMode>(GetWorld()->GetAuthGameMode()); // Getting the gamemode
		if (GM) // if sucessfully got the gamemode
		{
			GM->CompleteMission(MyPawn); 
		}
	}
}

