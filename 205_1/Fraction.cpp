#include "Fraction.h"
using namespace std;

Fraction::~Fraction()
{
}
Fraction operator*(int number, const Fraction& frac)
{
	return Fraction(frac.getNominator() * number, frac.getDenominator());
}

Fraction operator*(const Fraction & frac, int number)
{
	return Fraction(frac.getNominator() * number, frac.getDenominator());
}

Fraction operator/(int number, const Fraction& frac)
{
	return Fraction(frac.getNominator(), frac.getDenominator()* number); 
}

Fraction operator/(const Fraction & frac, int number)
{
	return Fraction(frac.getNominator(), frac.getDenominator()* number);
}

Fraction operator+(int number, const Fraction& frac)
{
	return Fraction(frac.getNominator() + number * frac.getDenominator(), frac.getNominator());
}

Fraction operator+(const Fraction & frac, int number)
{
	return Fraction(frac.getNominator() + number * frac.getDenominator(), frac.getNominator());
}

Fraction operator-(int number, const Fraction& frac)
{
	return Fraction(frac.getNominator() - number * frac.getDenominator(), frac.getNominator());
}

Fraction operator-(const Fraction & frac, int number)
{
	return Fraction(frac.getNominator() - number * frac.getDenominator(), frac.getNominator());
}

int main()//Testing-----
{
	Fraction a(1, 3);
	Fraction b(3, 28);
	Fraction c;
	c = a + b;
	cout << c << "\t(should be 37/84)" << endl;

	c = a - b;
	cout << c << "\t(should be 19/84)" << endl;

	c = a * b;
	cout << c << "\t(should be 3/84)" << endl;

	c = a / b;
	cout << c << "\t(should be 28/9)" << endl;

	a -= b;
	cout << a << "\t(should be 19/84)" << endl;

	c = -1 * b;
	cout << c << "\t(should be -3/28)" << endl;

	c = b * (-1);
	cout << c << "\t(should be -3/28)" << endl;


	c = Fraction(-100, 3);
	cout << (int)c << "\t(should be -33)" << endl;
	cout << (float)c << "\t(should be -33.3...)" << endl;
	cout << (double)c << "\t(should be -33.3...)" << endl;


	cin.get();
	return 0;


}
