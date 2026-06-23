// CXPlayerState.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CXPlayerState.generated.h"

/**
 *
 */
UCLASS()
class CHATX_API ACXPlayerState : public APlayerState
{
    GENERATED_BODY()

public:
    UPROPERTY(Replicated)
    FString PlayerNameString;

    UPROPERTY()
    int32 CurrentGuessCount = 0;

    UPROPERTY()
    int32 MaxGuessCount = 9;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};