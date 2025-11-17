// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "C_SpaceSPawn.generated.h"

UCLASS()
class COWBOY_BEBOP_API AC_SpaceSPawn : public APawn
{
	GENERATED_BODY()

public:

	// Sets default values for this pawn's properties
	AC_SpaceSPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	public Tick(float DeltaTime);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
