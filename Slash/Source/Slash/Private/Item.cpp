// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "DrawDebugHelpers.h"
#include "Slash/DebugMacros.h"


AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	/*
	UE_LOG(LogTemp, Warning, TEXT("Begin Play!"));
	
	if (GEngine) 
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item OnScreen Message!"));
	}

	UWorld* World = GetWorld();	
	SetActorLocation(FVector(0.f,0.f,50.f));
	SetActorRotation(FRotator(0.f,45.f,0.f));
	
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();

	DRAW_SPHERE(Location);
	//DRAW_LINE(Location, Location + Forward * 100.f);
	//DRAW_POINT(Location + Forward * 100.f);
	DRAW_VECTOR(Location, Location + Forward * 100.f);

	/*
	if (World)
	{
		
		DrawDebugLine(World, Location, Location + Forward * 100.f, FColor::Red, true, -1.f, 0, 1.f);	
		
	}
	*/
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*
	UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);

	if (GEngine)
	{
		FString Name = GetName();
		FString Message = FString::Printf(TEXT("Item Name: %s"), *Name);
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, Message);

		UE_LOG(LogTemp, Warning, TEXT("Item Name: %s"), *Name);
	}
	//Everytime we use float in a tick function the varible will change depending on the framerate. Pls use Deltatime

	//Movement rate in units of cm/s
	float MovementRate = 50.f;
	float RotationRate = 45.f;

	//Movement rate * DeltaTime (cm/s) * (s/frame) = (cm/frame)
	AddActorWorldOffset(FVector(MovementRate * DeltaTime, 0.f, 0.f));
	AddActorWorldRotation(FRotator(0.f, RotationRate * DeltaTime, 0.f));
	DRAW_SPHERE_SingleFrame(GetActorLocation());
	//The vector draw is always looking forward with the length of 1 * 100 but the actor is Rotating. RotationRate * DeltaTime 
	DRAW_VECTOR_SingleFrame(GetActorLocation(),GetActorLocation() + GetActorForwardVector() * 100.f);
	*/

	//We create a sum
	RunningTime += DeltaTime;
	//The we use de Sin Function to get a wave function
	float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant);

	AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));

	DRAW_SPHERE_SingleFrame(GetActorLocation());
	DRAW_VECTOR_SingleFrame(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.f);
}

