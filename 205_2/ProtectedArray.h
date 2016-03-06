#include <iostream>
#include <vector>
using namespace std;

template <class T>
class ProtectedArray
{
public:
	ProtectedArray<T>(int sizeOfArray) : size(sizeOfArray) { vec.resize(size); }
	~ProtectedArray<T>(){}
	T getIndex(int index) { return vec[index]; }
	void setIndex(int index, T value) { if (index < size || index >= 0) { vec[index] = value; } else { throw "OUT OF RANGE"; }}
	T &operator[](const int index);
	friend ostream& operator<<(ostream& out, const T value) { out << value; return out; }

private:
	int size;
	vector <T> vec;
};
