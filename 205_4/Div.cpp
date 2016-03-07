#include "Div.h"


bool Div::supportsOpearion(string operation)
{
	return !(operation.compare("Div") && operation.compare("/"));
}

double Div::calcResult(double currVal, vector<string> parameters)
{
	if (parameters.size() != numberOfParameters)
		throw "Not Enoough Params!";
	return currVal / stod(parameters[0]);
}

Div::~Div()
{

}