// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "VehiclePawn.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLES_API AVehiclePawn : public AWheeledVehicle
{
	GENERATED_BODY()

public:
	AVehiclePawn();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	//		THROTTLE / STEERING
	void ApplyThrottle(float Val);
	void ApplySteering(float Val);
	//		LOOK AROUND
	void LookUp(float Val);
	void Turn(float Val);
	//		HANDBRAKE	
	void OnHandbrakePressed();
	void OnHandbrakeReleased();
	//		UPDATE IN AIR PHYSICS
	void UpdateInAirControl(float DeltaTime);

};

/*
protected:										// Tried to use inherited camera but wasn't work for rotations and camera toggle correctly, I need to check this

											// SPRING ARM THAT WILL OFFSET THE CAMERA
	UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

												// CAMERA COMPONENT THAT WILL BE OUR VIEWPOINT
	UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera1;
};
*/