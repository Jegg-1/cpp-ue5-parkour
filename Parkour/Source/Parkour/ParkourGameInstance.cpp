#include "ParkourGameInstance.h"

void UParkourGameInstance::SetParkourTime(float Time)
{
    TimeSet = true;
    ParkourTime = Time;
}

float UParkourGameInstance::GetParkourTime()
{
    TimeSet = false;
    return ParkourTime;
}

bool UParkourGameInstance::IsTimeSet() const
{
    return TimeSet;
}
