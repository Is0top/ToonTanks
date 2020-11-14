// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameModeBase.h"

void ATankGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	// get references and game win/lose condition
	//HandleGameStart();
}

void ATankGameModeBase::ActorDied(AActor* DeadActor)
{
	// handle death of a turret
	// or a player
	UE_LOG(LogTemp, Warning, TEXT("A pawn died"));
}

void ATankGameModeBase::HandleGameStart()
{
	//initialize player, turrets, score, countdown
	//call Blueprint GameStart();
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
	// Check if player won (destroyed all turrets within given time) or lost (died or ran out of time)
	// display gameover message
	// call Blueprint version of GameOver();
}
