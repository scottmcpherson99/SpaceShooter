#include "SpawnVolume.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "EnemyCharacter.h"

// Sets default values
ASpawnVolume::ASpawnVolume()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//create the box component to represent the spawn volume
	whereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("Where to spawn"));
	RootComponent = whereToSpawn;

	//set the spawn delay range
	spawnDelayRangeLow = 5.0f;
	spawnDelayRangeMax = 10.0f;
}

// Called when the game starts or when spawned
void ASpawnVolume::BeginPlay()
{
	Super::BeginPlay();
	//set the timer on spawn pickup
	spawnDelay = FMath::FRandRange(spawnDelayRangeLow, spawnDelayRangeMax);
	GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, spawnDelay, false);
}

// Called every frame
void ASpawnVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


FVector ASpawnVolume::GetRandomPointInVolume()
{
	FVector SpawnOrigin = whereToSpawn->Bounds.Origin;
	FVector  SpawnExtent = whereToSpawn->Bounds.BoxExtent;

	return UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnExtent);
}

void ASpawnVolume::SetSpawningActive(bool bShouldSpawn)
{
	if (bShouldSpawn)
	{
		//set the timer on spawn pickup
		spawnDelay = FMath::FRandRange(spawnDelayRangeLow, spawnDelayRangeMax);
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, spawnDelay, false);
	}
	else
	{
		//clear the timer
		GetWorldTimerManager().ClearTimer(SpawnTimer);
	}
}


void ASpawnVolume::SpawnPickup()
{

	//if we have set something to spawn
	if (whatToSpawn != NULL)
	{
		//check for a valid world
		UWorld* const world = GetWorld();
		if (world)
		{

			//set the spawn parameters
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			//Get a random location to spawn at
			FVector SpawnLocation = GetRandomPointInVolume();

			//Get a random rotation for the spawned item
			FRotator SpawnRotator;
			SpawnRotator.Yaw = 0.f;
			SpawnRotator.Pitch = 0.f;
			SpawnRotator.Roll = 0.f;

			//spawn the pickup
			AEnemyCharacter* const enemySpawned = world->SpawnActor<AEnemyCharacter>(whatToSpawn, SpawnLocation, SpawnRotator, SpawnParams);

			spawnDelay = FMath::FRandRange(spawnDelayRangeLow, spawnDelayRangeMax);
			GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, spawnDelay, false);

		}
	}

}

