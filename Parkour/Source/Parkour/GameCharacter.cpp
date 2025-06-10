#include "GameCharacter.h"


AGameCharacter::AGameCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	fallVelocity = -1.0;

	capsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	RootComponent = capsuleComponent;

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	camera->SetupAttachment(capsuleComponent);

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AGameCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	UpdateRotation(deltaTime);
	UpdatePosition(deltaTime);
}

void AGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Vertical", this, &AGameCharacter::InputVertical);
	PlayerInputComponent->BindAxis("Horizontal", this, &AGameCharacter::InputHorizontal);
	PlayerInputComponent->BindAxis("Mouse X", this, &AGameCharacter::InputMouseX);
	PlayerInputComponent->BindAxis("Mouse Y", this, &AGameCharacter::InputMouseY);

	InputComponent->BindAction("Jump", IE_Pressed, this, &AGameCharacter::Jump);
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

void AGameCharacter::Jump()
{
	if (!grounded)
		return;

	grounded = false;
	fallVelocity = jumpVelocity;
}

void AGameCharacter::UpdatePosition(float deltaTime)
{
	FVector currentPos = GetActorLocation();

	// Calculate movement direction
	FVector movementDirection = FVector::ZeroVector;
	movementDirection += GetActorForwardVector() * moveInput.X;
	movementDirection += GetActorRightVector() * moveInput.Y;
	movementDirection.Normalize();

	// Apply movement
	FVector movement = movementDirection * moveSpeed * deltaTime;

	// Simple ground check and gravity
	FHitResult hit;
	FCollisionQueryParams params;
	params.AddIgnoredActor(this);

	float capsuleHalfHeight = capsuleComponent->GetScaledCapsuleHalfHeight();
	FVector start = currentPos;
	FVector end = start + FVector::DownVector * (capsuleHalfHeight + 2.0f); // Slightly below capsule

	bool bIsGrounded = GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, params);

	if (!bIsGrounded || fallVelocity < 0.0)
	{
		fallVelocity += gravity * deltaTime;
		movement += FVector::DownVector * fallVelocity * deltaTime;
		grounded = false;
	}
	else
	{
		fallVelocity = 0.0;
		grounded = true;
	}

	// Move the character with sweep for collision
	SetActorLocation(currentPos + movement, true);
}

void AGameCharacter::UpdateRotation(float deltaTime)
{
	controlRotator.Pitch = FMath::Clamp(controlRotator.Pitch + rotInput.Y, -89.5, 89.5);
	controlRotator.Yaw += rotInput.X;

	rotInput = FVector::ZeroVector;

	FRotator characterRotator = FRotator::ZeroRotator;
	FRotator cameraRotator = FRotator::ZeroRotator;
	characterRotator.Yaw = controlRotator.Yaw;
	cameraRotator.Pitch = controlRotator.Pitch;

	SetActorRotation(characterRotator);
	camera->SetRelativeRotation(cameraRotator);
}
