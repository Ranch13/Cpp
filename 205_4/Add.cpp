#pragma once
#include "Add.h"

bool Add::supportsOpearion(string operation)
{
	return !(operation.compare("Add") && operation.compare("+"));
}

double Add::calcResult(double currVal, vector<string> parameters)
{
	if (parameters.size() != numberOfParameters)
		throw "Not Enoough Params!";
	return currVal + stod(parameters[0]);
}

Add::~Add()
{
	
}