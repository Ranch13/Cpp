#include "Sub.h"


bool Sub::supportsOpearion(string operation)
{
	return !(operation.compare("Sub") && operation.compare("-"));
}

double Sub::calcResult(double currVal, vector<string> parameters)
{
	if (parameters.size() != numberOfParameters)
		throw "Not Enoough Params!";
	return currVal - stod(parameters[0]);
}

Sub::~Sub()
{

}