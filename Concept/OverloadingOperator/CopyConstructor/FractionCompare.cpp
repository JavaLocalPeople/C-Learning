#include <cassert>
#include <iostream>

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// Default constructor
	Fraction(int numerator = 0, int denominator = 1) :
		m_numerator(numerator), m_denominator(denominator)
	{
		assert(denominator != 0);
	}

	friend std::ostream& operator<<(std::ostream& out, const Fraction &f1);
};

std::ostream& operator<<(std::ostream& out, const Fraction &f1)
{
	out << f1.m_numerator << "/" << f1.m_denominator;
	return out;
}

int main()
{
	int x(5); // Direct initialize an integer
	Fraction fiveThirds(5, 3); // Direct initialize a Fraction, calls Fraction(int, int) constructor

	int	x{ 5 }; // Uniform initialization of an integer
	Fraction fiveThirds{ 5,3 };// Uniform initialization of a Fraction, calls Fraction(int, int) constructor

	int x = 6; // Copy initialize an integer
	Fraction six = Fraction(6); // Copy initialize a Fraction, will call Fraction(6, 1)
	Fraction seven = 7; // Copy initialize a Fraction.  The compiler will try to find a way to convert 7 to a Fraction, which will invoke the Fraction(7, 1) constructor.
}
