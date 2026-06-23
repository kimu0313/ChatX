// CXPlayerState.cpp


#include "CXPlayerState.h"
#include "Net/UnrealNetwork.h"

void ACXPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ThisClass, PlayerNameString);
    DOREPLIFETIME(ThisClass, CurrentGuessCount);
    DOREPLIFETIME(ThisClass, MaxGuessCount);
}