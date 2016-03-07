#pragma once
#include "CalculatorOperation.h"

class Div :public CalculatorOperation
{
public:
	Div() { numberOfParameters = 1; }
	~Div();
	bool supportsOpearion(string operation);
	double calcResult(double currVal, vector<string> parameters);

private:

};
