// Fill out your copyright notice in the Description page of Project Settings.


#include "PaddlePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "PaddleCharacter.h"
#include "Ball.h"

APaddlePlayerController::APaddlePlayerController()
{
}

void APaddlePlayerController::BeginPlay()
{
	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);

	SpawnNewBall();
}


void APaddlePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	EnableInput(this);
	InputComponent->BindAxis(TEXT("MoveHorizontal"), this, &APaddlePlayerController::MoveHorizontal);
	InputComponent->BindAction("Launch", IE_Pressed, this, &APaddlePlayerController::Launch);
}

void APaddlePlayerController::MoveHorizontal(float AxisValue)
{
	if (AxisValue != 0)
	{
		GEngine->AddOnScreenDebugMessage(1, 10, FColor::Red, TEXT("MOVE HOR"));
		auto MyPawn = Cast<APaddleCharacter>(GetPawn());
		if (MyPawn)
		{
			MyPawn->MoveHorizontal(AxisValue);
		}
	}
}

void APaddlePlayerController::Launch()
{
	MyBall->Launch();
}

void APaddlePlayerController::SpawnNewBall()
{
	if (!MyBall)
	{
		MyBall = nullptr;
	}

	if (BallObj)
	{
		MyBall = GetWorld()->SpawnActor<ABall>(BallObj, SpawnLocation, SpawnRotation);
	}
}
