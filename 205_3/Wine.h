#pragma once
#include "Drink.h"

const int RED = 1;
const int WHITE = 2;

class Wine : public Drink
{
public:
	Wine(int color, string name, int year) : COLOR(color), name(name), year(year) {}
	virtual string getName();
	void preapare() { cout << ((COLOR == WHITE) ? ("Well, all you need to do is pour it into a glass and serve.The wine was cold before.") : ("Well, all you need to do is pour it into a glass and serve.The wine temprature is (16-18) Celcious.")) << endl; }
	~Wine();

private:
	int COLOR;
	string name;
	int year;
};

