// CXGameStateBase.cpp

#include "Game/CXGameStateBase.h"
#include "ChatX.h"

void ACXGameStateBase::MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString)
{
    FString LoginMessage = InNameString + TEXT(" has joined the game.");
    ChatXFunctionLibrary::MyPrintString(this, LoginMessage, 10.f);
}