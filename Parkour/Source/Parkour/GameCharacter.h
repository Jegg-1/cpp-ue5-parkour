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
	virtual void Tick(float deltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	double gravity = 600;
	double jumpVelocity = -300.0;
	double fallVelocity = 0.0;
	bool grounded = false;

	FVector moveInput;
	FVector rotInput;

	FVector currentVelocty;
	FRotator controlRotator;

	UPROPERTY(EditAnywhere)
	float moveSpeed = 300.f;

	UPROPERTY(EditAnywhere)
	FVector cameraRotationOffset = FVector(0.0, 180.0, 0.0);

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

	void Jump();

	void UpdatePosition(float deltaTime);
	void UpdateRotation(float deltaTime);

};
