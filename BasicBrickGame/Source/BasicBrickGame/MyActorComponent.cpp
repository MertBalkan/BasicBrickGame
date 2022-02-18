#include "Components/InputComponent.h"
#include "MyActorComponent.h"

// Sets default values for this component's properties
UMyActorComponent::UMyActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UMyActorComponent::BeginPlay()
{
	Super::BeginPlay();

	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (InputComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("INPUT COMPONENT FOUND"));
		InputComponent->BindAxis("HorizontalMove", this, &UMyActorComponent::MoveCharacter);
		InputComponent->BindAction("Deneme", IE_Pressed, this, &UMyActorComponent::MyKeyPressed);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("INPUT COMPONENT NOT FOUND"));
	}
}

void UMyActorComponent::MoveCharacter(float Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Value: %f"), Value);
	GetOwner()->SetActorRelativeLocation(FVector(GetOwner()->GetActorLocation() * 40.0f * Value), false, nullptr);
}

void UMyActorComponent::MyKeyPressed()
{
	UE_LOG(LogTemp, Warning, TEXT("F Key Pressed"));
}

// Called every frame
void UMyActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UE_LOG(LogTemp, Warning, TEXT("M_X: %f M_Y: %f M_Z: %f"), GetOwner()->GetActorLocation().X, GetOwner()->GetActorLocation().Y, GetOwner()->GetActorLocation().Z);
	// GetOwner()->SetActorRelativeLocation(FVector(GetOwner()->GetActorLocation() + DeltaTime * 40.0f), false, nullptr);
}