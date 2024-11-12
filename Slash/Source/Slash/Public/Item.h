// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class SLASH_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Amplitude = .25f;
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleDefaultsOnly)
	float RunningTime;
	UPROPERTY(EditAnywhere)
	float TimeConstant = 5.f;
};
