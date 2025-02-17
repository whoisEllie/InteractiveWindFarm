// Fill out your copyright notice in the Description page of Project Settings.


#include "Matrix.h"


Matrix::Matrix()
{
}

Matrix::Matrix(int Rows, int Columns)
{
	InternalMatrix.SetNum(Rows);

	for (int i = 0; i < Rows; i++)
	{
		InternalMatrix[i].Init(0.0f, Columns);
	}
}

Matrix::Matrix(int Rows, int Columns, float InitialValue)
{
	InternalMatrix.SetNum(Rows);

	for (int i = 0; i < Rows; i++)
	{
		InternalMatrix[i].Init(InitialValue, Columns);
	}
}

Matrix::~Matrix()
{
}
