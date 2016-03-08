#pragma once
#include "Wine.h"
#include "Beer.h"
#include <string>

const int SHELF_SIZE = 8;

class Bar
{
public:
	Bar();
	~Bar();
	int startBar();
	
private:
	Drink * stock[SHELF_SIZE];
	char * basicQustion = "What can I get you,sir? (0 - list options)";
	Drink * lastDrink = NULL;
};