#include "Bar.h"

using namespace std;

Bar::Bar()
{
	stock[0] = new Beer("Carlsberg");
	stock[1] = new Beer("Goldstar");
	stock[2] = new Beer("Tuburg");
	stock[3] = new Beer("Maccabi");
	stock[4] = new Wine(WHITE, "Golan Smadar", 1989);
	stock[5] = new Wine(WHITE, "Rezling", 1950);
	stock[6] = new Wine(RED, "Kianeti", 1689);
	stock[7] = new Wine(RED, "Shato Margo", 1952);

}

int Bar::startBar()
{
	int i;
	int option = 0;
	string input;

	while (option != 100)
	{
		cout << basicQustion << endl;
		getline(cin, input);
		option = stoi(input);
		switch (option)
		{
		case 0:
			cout << "(0)" << "\t" << "list options" << endl;
			for (i = 1; i < SHELF_SIZE; i++)
			{
				cout << '(' << i << ')' << "\t" << stock[i - 1]->getName() << endl;
			}
			cout << "(99)" << "\t" << "How did you prepare my last drink?" << endl;
			cout << "(100)" << "\t" << "Leave The Bar" << endl;
			break;
		case 99:
			if (lastDrink != NULL)
				lastDrink->preapare();
			else
				cout << "You Should Buy a One First :)" << endl;
			break;
		case 100:
			return 0;
		default:
			lastDrink = stock[option];
			cout << "One " << lastDrink->getName() << " Is coming up sir" << endl;
				break;
		}
	}
	return -1;
}


Bar::~Bar()
{
}
