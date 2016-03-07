#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class CalculatorOperation
{
protected:
	int numberOfParameters;
public:
	int requiredParameters() { return numberOfParameters; }
	virtual bool supportsOpearion(string operation) = 0;
	virtual double calcResult(double currVal, vector<string> parameters) = 0;
};
