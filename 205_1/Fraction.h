#include <iostream>
using namespace std;

class Fraction
{
public:
	Fraction() : m_nominator(0), m_denominator(1) { } //c'tor
	Fraction(int nominatior, int denominator) : m_nominator(nominatior), m_denominator(denominator) { } //c'tor
	~Fraction();//d'tor
	int getNominator() const{ return m_nominator; }
	int getDenominator() const{ return m_denominator; }
	Fraction operator*(const Fraction & other)const {return Fraction(m_nominator*other.m_nominator, m_denominator*other.m_denominator); }
	friend Fraction operator*(int number, const Fraction & frac);
	friend Fraction operator*(const Fraction & frac,int number);
	friend Fraction operator+(int number, const Fraction & frac);
	friend Fraction operator+(const Fraction & frac, int number);
	friend Fraction operator-(int number, const Fraction & frac);
	friend Fraction operator-(const Fraction & frac, int number);
	friend Fraction operator/(int number, const Fraction & frac);
	friend Fraction operator/(const Fraction & frac, int number);
	Fraction& operator*=(const Fraction & other) { m_nominator *= other.m_nominator; m_denominator *= other.m_denominator; return Fraction(m_nominator, m_denominator); }
	Fraction operator+(const Fraction & other)const {return Fraction(m_nominator * other.m_denominator + other.m_nominator * m_denominator, m_denominator*other.m_denominator); }
	Fraction& operator+=(const Fraction & other) { m_nominator *= other.m_denominator + other.m_nominator * m_denominator;m_denominator *= other.m_denominator; return Fraction(m_nominator, m_denominator); }
	Fraction operator-()const						{return Fraction(-m_nominator, m_denominator); }
	Fraction operator-(const Fraction & other)const { return Fraction(m_nominator * other.m_denominator - other.m_nominator * m_denominator, m_denominator*other.m_denominator); }
	Fraction& operator-=(const Fraction & other) { m_nominator *= other.m_denominator - other.m_nominator * m_denominator; m_denominator *= other.m_denominator; return Fraction(m_nominator, m_denominator); }
	Fraction operator/(const Fraction & other)const { return Fraction(m_nominator*other.m_denominator, m_denominator*other.m_nominator); }
	Fraction& operator/=(const Fraction & other) { m_nominator *= other.m_denominator; m_denominator *= other.m_nominator; return Fraction(m_nominator, m_denominator); }
	friend ostream& operator<<(ostream& out, const Fraction& frac) { out << frac.m_nominator << "/" << frac.m_denominator; return out; }
	void print() { cout << this; }
	operator int() const { return (m_nominator) / m_denominator; }
	operator float() const { return ((float)m_nominator) / (float)m_denominator; }
	operator double() const { return ((double)m_nominator) / (double)m_denominator; }
private:
	int m_nominator;
	int m_denominator;
};

	