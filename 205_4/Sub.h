#pragma once
#include "CalculatorOperation.h"

class Sub:public CalculatorOperation
{
public:
	Sub() { numberOfParameters = 1; }
	~Sub();
	bool supportsOpearion(string operation);
	double calcResult(double currVal, vector<string> parameters);

private:

};
