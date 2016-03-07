#pragma once
#include "CalculatorOperation.h"

class Mod :public CalculatorOperation
{
public:
	Mod() { numberOfParameters = 1; }
	~Mod();
	bool supportsOpearion(string operation);
	double calcResult(double currVal, vector<string> parameters);

private:

};
