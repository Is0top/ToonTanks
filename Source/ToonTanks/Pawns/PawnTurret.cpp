// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTurret.h"
#include "Kismet/GamePlayStatics.h"

// Called when the game starts or when spawned
void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);
}


// Called every frame
void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void APawnTurret::CheckFireCondition()
{
	// if Player == null || Player is dead THEN BAIL!

	// if Player is in range THEN FIRE!

	UE_LOG(LogTemp, Warning, TEXT("Fire Condition Checked"));
}