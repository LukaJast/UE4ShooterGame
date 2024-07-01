// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"

// Sets default values
AShooterCharacter::AShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("BeginPlay() has been called"))
	
	int MyInt{ 42 };
	UE_LOG(LogTemp, Warning, TEXT("int MyInt: %d"), MyInt);
	
	float MyFloat{ 42.3434554f };
	UE_LOG(LogTemp, Warning, TEXT("float MyFloat: %f"), MyFloat);

	double MyDouble{ 0.0004 };
	UE_LOG(LogTemp, Warning, TEXT("double MyDouble: %lf"), MyDouble);

	char MyChar{ 'J' };
	UE_LOG(LogTemp, Warning, TEXT("char MyChar: %c"), MyChar);

	wchar_t MyWideChar{ L'J' };
	UE_LOG(LogTemp, Warning, TEXT("wchar_t MyWideChar: %lc"), MyWideChar);

	bool MyBool{ true };
	UE_LOG(LogTemp, Warning, TEXT("bool MyBool: %d"), MyBool);

	UE_LOG(LogTemp, Warning, TEXT("int: %d, fload %f, bool: %d"), MyInt, MyFloat, MyBool);
}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

