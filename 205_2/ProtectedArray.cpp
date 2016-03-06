#include "ProtectedArray.h"

const int SIZE = 40;

template<class T>
T & ProtectedArray<T>::operator[](const int index)
{
	if (index >= size || index < 0)
	{
		throw "OUT OF RANGE";
	}

	return vec[index];
}

int main() //Testing-----
{
	ProtectedArray<int> A(SIZE);
	int i;
	int * intptr;
	for (i = 0; i < SIZE; i++)
	{
		A.setIndex(i, i);
	}

	intptr = &A[3];
	A[2] = 5;
	cout << "Value of A[2] : " << *(intptr++) << endl;
	cout << "Value of A[5] : " << A[5] << endl;
	cout << "Value of A[12] : " << A[20] << endl;

	return 0;
}