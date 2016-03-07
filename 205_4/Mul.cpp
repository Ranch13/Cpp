#include "Mul.h"


bool Mul::supportsOpearion(string operation)
{
	return !(operation.compare("Mul") && operation.compare("*"));
}

double Mul::calcResult(double currVal, vector<string> parameters)
{
	if (parameters.size() != numberOfParameters)
		throw "Not Enoough Params!";
	return currVal * stod(parameters[0]);
}

Mul::~Mul()
{

}