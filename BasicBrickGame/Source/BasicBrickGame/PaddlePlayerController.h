// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ball.h"
#include "GameFramework/PlayerController.h"
#include "PaddlePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BASICBRICKGAME_API APaddlePlayerController : public APlayerController
{
	GENERATED_BODY()
	APaddlePlayerController();

	UFUNCTION()
	virtual void SetupInputComponent() override;
protected:
	virtual void BeginPlay() override;
	void MoveHorizontal(float AxisValue);
	void Launch();
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<ABall> BallObj;
	
	ABall* MyBall;;

	FVector SpawnLocation = FVector(10.0f, 0.0f, 40.0f);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
public:
	void SpawnNewBall();
	
};
