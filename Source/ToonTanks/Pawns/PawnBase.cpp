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
