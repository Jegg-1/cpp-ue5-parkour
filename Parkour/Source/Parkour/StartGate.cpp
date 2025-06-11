// Fill out your copyright notice in the Description page of Project Settings.


#include "StartGate.h"

// Sets default values
AStartGate::AStartGate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AStartGate::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AStartGate::BeginPlay()
{
	Super::BeginPlay();
	
}

void AStartGate::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AParkourGamemode* GameMode = Cast<AParkourGamemode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		GameMode->StartParkour();
		Destroy();
	}
}

