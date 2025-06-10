// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Components/CapsuleComponent.h>
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "GameCharacter.generated.h"


UCLASS()
class PARKOUR_API AGameCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGameCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector moveInput;
	FVector rotInput;

	FVector currentVelocty;
	FRotator controlRotator;

	UPROPERTY(EditAnywhere)
	float moveSpeed = 60.0f;

	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* capsuleComponent;

	UPROPERTY(EditAnywhere)
	UCameraComponent* camera;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* rootScene;

	void InputHorizontal(float value);
	void InputVertical(float value);
	void InputMouseX(float value);
	void InputMouseY(float value);
};
