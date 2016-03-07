#pragma once
#include "CalculatorOperation.h"

class Sqrt:public CalculatorOperation
{
public:
	Sqrt() { numberOfParameters = 0; }
	~Sqrt();
	bool supportsOpearion(string operation);
	double calcResult(double currVal, vector<string> parameters);

private:

};
