#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Sqrt.h"
#include "Pow.h"
#include "Div.h"
#include "Set.h"
#include "Mod.h" //I Added one more operation
#include <set>

using namespace std;

/*Parsing The Input:(NAME_OF_OP,PARAM1,PARMA2,...)*/
vector<string>& stringParser(int position, string line, string delimiter,vector<string>& vec,string& nextOp)
{
	string token;
	vec.clear();
	bool first = true; // to indicate its the first word
	while ((position = line.find(delimiter)) != string::npos)
	{
		if (first) 
		{ 
			nextOp = line.substr(0, position);
			line.erase(0, position + delimiter.length());
			first = false;
			continue;
		}
		token = line.substr(0, position);
		vec.push_back(token);
		line.erase(0, position + delimiter.length());
	}
	if (first)
	{
		nextOp = line;
	}
	else
	{
		vec.push_back(line);
	}
	return vec;
}

int main()
{
	double regester = 0;//register is keywords in C++ so our register will be with 'e' .
	string nextOp;
	vector<string> params;
	string line;
	set<CalculatorOperation*> operations; //The set will hold all the objects for avalibale operations
	set<CalculatorOperation*>::iterator op; // for the modularity
	unsigned int pos = 0;//for string pasrsing
	const string delimiter = " ";//for string parsing
	/*To add a new operation:
	-Add cpp and h Files.
	-Add an object of the operation to operations set
	-enjoy :)
	*/
	Add add;
	Mul mul;
	Div div;
	Sqrt sqrt;
	Pow pow;
	Sub sub;
	Set set;
	Mod mod;
	operations.insert(&add);
	operations.insert(&mul);
	operations.insert(&div);
	operations.insert(&sqrt);
	operations.insert(&pow);
	operations.insert(&sub);
	operations.insert(&set);
	operations.insert(&mod);

	cout << "Welcome to the modular calculator." << endl;

	while (nextOp != "exit")
	{
		cout << "Current Value is: "<< regester << endl;
		cout << "[>>]";
		nextOp = "";
		getline(cin,line);//read the input to line 
		stringParser(pos, line, delimiter, params,nextOp); // first string in the line is the operation, we find it by the first " ".
		for (op = operations.begin(); op != operations.end();++op)
		{
			if ((*op) -> supportsOpearion(nextOp))
			{
				//read the number of params the op need from the input.
				//params.resize((*op)->requiredParameters() + 1); in my implimination this line is usless
				try 
				{
					regester = (*op)->calcResult(regester, params); //execute the opreation
				}
				catch (const char* e)
				{
					if (strcmp(e, "Not Enoough Params!") == 0)
					{
						cout << "Not Enoough Params!" << endl;
					}
					else
						throw;
				}
				
				break;
			}
		}
		if (op == operations.end()) { cout << "Operation Was Not Found!" << endl; }

	}

}

