#pragma once
#include "Drink.h"

class Beer : public Drink
{
public:
	Beer(string beerName);
	virtual string getName() { return name ; }
	void preapare() { cout << "Well, all you need to do is pour it into a glass and serve." << endl; }
	~Beer();

private:

};

