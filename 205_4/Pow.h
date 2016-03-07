#pragma once
#include "CalculatorOperation.h"

class Pow :public CalculatorOperation
{
public:
	Pow() { numberOfParameters = 1; }
	~Pow();
	bool supportsOpearion(string operation);
	double calcResult(double currVal, vector<string> parameters);

private:

};
