// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GWOEM.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTIVEWINDFARM_API UGWOEM : public UObject
{
	GENERATED_BODY()

	// The angle interval
	int interval = 15;

	// The number of bins
	int interval_num = (360/interval);

	// The value of cut-in speed
	float cut_in_speed = 3.5f;

	// The value of rated speed
	int	rated_speed = 14;

	// The value of cut-out speed
	float cut_out_speed = 25.0f;

	// The rotor radium
	float R = 40;

	// The hub height
	int H = 80;

	// The thrust coefficient
	float CT = 0.8;

	// The axial induction factor * 2
	float a = 1 - sqrt(1-CT);

	// The spreading constant for land case (z=80, zo=0.54)
	float kappa = 0.01;

	// Minimum distance between any two wind turbines
	float minDistance = 5 * R;

	// The number of wind turbines
	int N = 15;

	// The length and width of the wind farm
	int X = 2000;
	int Y = 2000;

	void calculateGWOEM();
};
