// Fill out your copyright notice in the Description page of Project Settings.


#include "GWOEM.h"
#include "Matrix.h"

void UGWOEM::calculateGWOEM()
{
	TArray<float> c = {7.0f, 5.0f, 5.0f, 5.0f, 5.0f, 4.0f, 5.0f, 6.0f, 7.0f, 7.0f, 8.0f, 9.5f, 10.0f, 8.5f, 8.5f, 6.5f, 4.6f, 2.6, 8.0f, 5.0f, 6.4f, 5.2f, 4.5f, 3.9f};
	TArray<float> fre = {0.0003f, 0.0072f, 0.0237f, 0.0242f, 0.0222f, 0.0301f, 0.0397f, 0.02268f, 0.0626f, 0.0801f, 0.1025f, 0.1445f, 0.1909f, 0.1162f, 0.0793f, 0.0082f, 0.0041f, 0.0008f, 0.0010f, 0.0005f, 0.0013f, 0.0031f, 0.0085f, 0.0222f};


	// Set the solution space of all turbines
	TArray<float> constraint = {R, X - R, R, Y-R};
	float F = 0.9f;
	float CR = 0.9f;

	Matrix* Alpha_pos = new Matrix(1, 2 * N);
	float Alpha_score = __inf();

	Matrix* Beta_pos = new Matrix(1, 2 * N);
	float Beta_score = __inf();

	Matrix* Delta_pos = new Matrix(1, 2 * N);
	float Delta_score = __inf();


	TArray<float> candidatePositions = {};
	int maxEvaluations = 150000;
	int evaluations = 0;

	//TODO: Figure out how to correctly initialize pre-populated TArrays (ideally WITHOUT this messy crap :p)
	//TSharedPtr<TArray<float>> parent = TArray<float>(2 * N);
}
