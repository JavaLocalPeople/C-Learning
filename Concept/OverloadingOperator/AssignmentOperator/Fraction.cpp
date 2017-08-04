#include <cassert>
#include <iostream>

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int numerator = 0, int denominator = 1) :
		m_numerator(numerator), m_denominator(denominator)
	{
		assert(denominator != 0);
	}

	// Copy Constructor
	Fraction(const Fraction &copy) :
		m_numerator(copy.m_numerator), m_denominator(copy.m_denominator)
	{
		// no need to check for a denominator of 0 here since copy must already be a valid Fraction
		std::cout << "Copy constructor called\n"; // just to prove it works
	}

	// Overload Assignment
	Fraction& operator= (const Fraction &fraction);

	friend std::ostream& operator<<(std::ostream& out, const Fraction& f1);
};

std::ostream& operator<<(std::ostream& out, const Fraction &f1)
{
	out << f1.m_numerator << "/" << f1.m_denominator;
	return out;
}

// A simplistic implementation of operator= (see better implementation below)
Fraction& Fraction::operator= (const Fraction &fraction)
{
	m_numerator = fraction.m_numerator;
	m_denominator = fraction.m_denominator;

	// return the existing object so we can chain this operator
	return *this;
}

int main()
{
	Fraction f1(5, 3);
	Fraction f2(7, 2);
	Fraction f3(9, 5);

	f1 = f2 = f3; // chained assignment

	std::cout << f1;


	return 0;
}
