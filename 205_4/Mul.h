#pragma once
#include "CalculatorOperation.h"

class Mul:public CalculatorOperation
{
public:
	Mul() { numberOfParameters = 1; }
	~Mul();
	bool supportsOpearion(string operation);
	double calcResult(double currVal, vector<string> parameters);

private:

};
