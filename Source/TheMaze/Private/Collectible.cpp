#include "Collectible.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Characters/CFPSCharacter.h"

// Sets default values
ACollectible::ACollectible()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollectibleMesh"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); 
	RootComponent = MeshComp; 

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollectibleSphere"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly); 
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetupAttachment(MeshComp); 
}

// Called when the game starts or when spawned
void ACollectible::BeginPlay()
{
	Super::BeginPlay();
	PlayEffects(); 	
}

void ACollectible::PlayEffects()
{
	// Spawns Particles at CollectibleSphere location
	UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation());
}

// Notify when Player is overlap with CollectibleSphere 
void ACollectible::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//Triggers when actor walking through object
	Super::NotifyActorBeginOverlap(OtherActor);
	
	PlayEffects();

	// Need to cast it for the compiler to know which method belong to Character 
	ACFPSCharacter* MyCharacter = Cast <ACFPSCharacter>(OtherActor);
	if(MyCharacter)
	{
		MyCharacter->bIsCarryingObjective = true; 
		
		Destroy(); 
	}
}


