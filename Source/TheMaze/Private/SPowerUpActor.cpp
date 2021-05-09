#include "SPowerUpActor.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "TimerManager.h"
#include "SPowerup.h"

// Sets default values
ASPowerUpActor::ASPowerUpActor()
{
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetSphereRadius(75.0f);
	RootComponent = SphereComp;

	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	DecalComp->SetRelativeRotation(FRotator(90, 0.0f, 0.0f)); 
	DecalComp->DecalSize = FVector(64, 75, 75); 
	DecalComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASPowerUpActor::BeginPlay()
{
	Super::BeginPlay();

	Respawn(); 
}

void ASPowerUpActor::Respawn()
{
	if (PowerUpClass == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("PowerUpClass is nullptr."));
		return; 
	}
	FActorSpawnParameters SpawnParams; 
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn; 

	PowerUpInstance = GetWorld()->SpawnActor<ASPowerup>(PowerUpClass, GetTransform(), SpawnParams);
}

void ASPowerUpActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (PowerUpInstance)
	{
		PowerUpInstance->ActivatePowerup(); 
		PowerUpInstance = nullptr; 

		// Sets timer to respawn
		GetWorldTimerManager().SetTimer(TimerHandle_RespawnTimer, this, &ASPowerUpActor::Respawn, CoolDownDuration);
	}
}


