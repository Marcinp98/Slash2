
#pragma once

#include "Components/CapsuleComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Bird.generated.h"


UCLASS()
class SLASH_API ABird : public APawn
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	ABird();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* Capsule;
};
