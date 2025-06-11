#include "EndScreenWidget.h"

void UEndScreenWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (RestartButton)
        RestartButton->OnClicked.AddDynamic(this, &UEndScreenWidget::OnRestartClicked);

    if (ExitButton)
        ExitButton->OnClicked.AddDynamic(this, &UEndScreenWidget::OnExitClicked);

    if (UWorld* World = GetWorld())
    {
        if (UParkourGameInstance* GI = Cast<UParkourGameInstance>(World->GetGameInstance()))
        {
            FString TimeString;
            if (GI->IsTimeSet())
                TimeString = FString::Printf(TEXT("Time: %.2f seconds"), GI->GetParkourTime());
            else
                TimeString = FString("Parkour Game");
            if (TimeText)
                TimeText->SetText(FText::FromString(TimeString));
        }
    }
}

void UEndScreenWidget::OnRestartClicked()
{
    UGameplayStatics::OpenLevel(this, "DemoLevel");
}

void UEndScreenWidget::OnExitClicked()
{
    UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
}