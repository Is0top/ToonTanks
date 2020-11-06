// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnBase.h"
#include "Components/CapsuleComponent.h"

APawnBase::APawnBase()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComp;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	if (BaseMesh && RootComponent)
	{
		BaseMesh->SetupAttachment(RootComponent);
	}

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	if (TurretMesh && BaseMesh)
	{
		TurretMesh->SetupAttachment(BaseMesh);
	}

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));
	if (ProjectileSpawnPoint && TurretMesh)
	{
		ProjectileSpawnPoint->SetupAttachment(TurretMesh);
	}
}

void APawnBase::RotateTurretFunction(FVector LookAtTarget)
{
	// Update TurretMest rotation to face towards LookAtTarget provided from child classes
	// TurretMesh->SetWorldRotation()...
}

void APawnBase::Fire()
{
	// Get ProjectileSpawnPoint Location && Rotation -> Spawn Projectile at Location firing towards Rotation
}

void APawnBase::HandleDestruction()
{
	// --- Universal Functionality ---
	// Play death effects particle, sound and camera shake

	// --- Then do Child overrides ---
	// -- PawnTurret - Inform Game mode Turret died, then Destroy() self

	// -- PawnTank - Inform Game mode Player died, then Hide() all components and stop movement input
}
