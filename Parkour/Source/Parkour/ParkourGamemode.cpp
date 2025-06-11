#include "ParkourGamemode.h"

AParkourGamemode::AParkourGamemode()
{
	DefaultPawnClass = AFPSCharacter::StaticClass();
}

void AParkourGamemode::BeginPlay()
{
    Super::BeginPlay();

    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (PC)
    {
        FInputModeGameOnly InputMode;
        PC->SetInputMode(InputMode);
        PC->bShowMouseCursor = false;
    }

    SetupInput();
}

void AParkourGamemode::StartParkour()
{
    StartTime = GetWorld()->GetTimeSeconds();
}

void AParkourGamemode::EndParkour()
{
    EndTime = GetWorld()->GetTimeSeconds();
    float FinalTime = EndTime - StartTime;

    if (UParkourGameInstance* GI = Cast<UParkourGameInstance>(GetGameInstance()))
    {
        GI->SetParkourTime(FinalTime);
    }

    UGameplayStatics::OpenLevel(this, "End");
}

float AParkourGamemode::GetParkourTime() const
{
    return EndTime - StartTime;
}

void AParkourGamemode::SetupInput()
{
    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (PC)
    {
        EnableInput(PC);

        InputComponent->BindAction("Restart", IE_Pressed, this, &AParkourGamemode::OnEscapePressed);
    }
}

void AParkourGamemode::OnEscapePressed()
{
    UGameplayStatics::OpenLevel(this, "End");
}