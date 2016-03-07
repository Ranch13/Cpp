#include "Mod.h"


bool Mod::supportsOpearion(string operation)
{
	return !(operation.compare("Mod") && operation.compare("%"));
}

double Mod::calcResult(double currVal, vector<string> parameters)
{
	if (parameters.size() != numberOfParameters)
		throw "Not Enoough Params!";
	return int(currVal) % stoi(parameters[0]);
}

Mod::~Mod()
{

}