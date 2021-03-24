#include "Collectible.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"


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
	
}


