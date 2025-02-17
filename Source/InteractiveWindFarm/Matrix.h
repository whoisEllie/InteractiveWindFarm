// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


/**
 * 
 */
class Matrix
{
public:
	Matrix();
	Matrix(int Rows, int Columns);
	Matrix(int Rows, int Columns, float InitialValue);

	TArray<TArray<float>> Get() { return InternalMatrix; }
	
	~Matrix();
	
private:
	TArray<TArray<float>> InternalMatrix;
};
