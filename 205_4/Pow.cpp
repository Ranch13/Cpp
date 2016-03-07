#include "Pow.h"


bool Pow::supportsOpearion(string operation)
{
	return !(operation.compare("Pow") && operation.compare("^"));
}

double Pow::calcResult(double currVal, vector<string> parameters)
{
	if (parameters.size() != numberOfParameters)
		throw "Not Enoough Params!";
	return pow(currVal,stod(parameters[0]));
}

Pow::~Pow()
{

}