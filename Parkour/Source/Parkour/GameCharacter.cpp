// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacter.h"

// Sets default values
AGameCharacter::AGameCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	capsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	RootComponent = capsuleComponent;

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	camera->SetupAttachment(capsuleComponent);
	camera->bUsePawnControlRotation = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGameCharacter::InputHorizontal(float value)
{
	moveInput.Y = value;
}

void AGameCharacter::InputVertical(float value)
{
	moveInput.X = value;
}

void AGameCharacter::InputMouseX(float value)
{
	rotInput.X += value;
}

void AGameCharacter::InputMouseY(float value)
{
	rotInput.Y += value;
}

// Called every frame
void AGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentPos = GetActorLocation();
	SetActorLocation(currentPos + (FVector::ForwardVector * DeltaTime * moveSpeed));
}

// Called to bind functionality to input
void AGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

