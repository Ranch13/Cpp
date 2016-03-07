#include "Sqrt.h"
#include <math.h>

bool Sqrt::supportsOpearion(string operation)
{
	return !(operation.compare("Sqrt"));
}

double Sqrt::calcResult(double currVal, vector<string> parameters)
{
	if (parameters.size() != numberOfParameters)
		throw "Not Enoough Params!";
	return sqrt(currVal);
}

Sqrt::~Sqrt()
{

}