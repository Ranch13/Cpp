#pragma once
#include <iostream>
using namespace std;

class Drink
{
public:
	virtual string getName() { return name; }
	virtual void preapare() = 0;

protected:
	string name;
};
