#pragma once
#include "CalculatorOperation.h"

class Add:public CalculatorOperation
{
public:
	Add() { numberOfParameters = 1; }
	~Add();
	bool supportsOpearion(string operation);
	double calcResult(double currVal, vector<string> parameters);
	
private:
	
};
