#include "Wine.h"

string Wine::getName()
{
	char resault[40];
	sprintf(resault, "(%d)\0", year);

	return name + string(resault);
}


Wine::~Wine()
{

}