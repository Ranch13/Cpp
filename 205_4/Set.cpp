#pragma once
#include "Set.h"

bool Set::supportsOpearion(string operation)
{
	return !(operation.compare("Set") && operation.compare("="));
}

double Set::calcResult(double currVal, vector<string> parameters)
{
	if (parameters.size() != numberOfParameters)
		throw "Not Enoough Params!";
	return stod(parameters[0]);
}

Set::~Set()
{

}