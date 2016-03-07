#pragma once

#include "CalculatorOperation.h"

class Set :public CalculatorOperation
{
public:
	Set() { numberOfParameters = 1; }
	~Set();
	bool supportsOpearion(string operation);
	double calcResult(double currVal, vector<string> parameters);

private:

};
