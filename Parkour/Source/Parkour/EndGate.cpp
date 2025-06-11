// Fill out your copyright notice in the Description page of Project Settings.


#include "EndGate.h"

// Sets default values
AEndGate::AEndGate()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AEndGate::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AEndGate::BeginPlay()
{
	Super::BeginPlay();

}

void AEndGate::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AParkourGamemode* GameMode = Cast<AParkourGamemode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		GameMode->EndParkour();
		Destroy();
	}
}

