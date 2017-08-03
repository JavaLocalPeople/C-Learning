#include <iostream>

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:

	Fraction(int numerator, int denominator)
	{
		m_numerator = numerator;
		m_denominator = denominator;
		reduce();
	}

	void print()
	{
		std::cout << m_numerator << "/" << m_denominator << std::endl;
	}

	static int gcd(int a, int b) {
		return b == 0 ? a : gcd(b, a % b);
	}

	void reduce()
	{
		int gcd = Fraction::gcd(m_numerator, m_denominator);
		m_numerator /= gcd;
		m_denominator /= gcd;
	}

	friend Fraction operator*(const Fraction &f1, const Fraction &f2);

	friend Fraction operator*(const Fraction &f, int value);
	friend Fraction operator*(int value, const Fraction &f);


};



Fraction operator*(const Fraction &f1, const Fraction &f2)
{
	return Fraction(f1.m_numerator*f2.m_numerator, f1.m_denominator * f2.m_denominator);
}

Fraction operator*(const Fraction &f, int value)
{
	return Fraction(f.m_numerator * value, f.m_denominator);
}

Fraction operator*(int value, const Fraction &f)
{
	return Fraction(f.m_numerator * value, f.m_denominator);

}

int main()
{
	Fraction f1(2, 5);
	f1.print();

	Fraction f2(3, 8);
	f2.print();

	Fraction f3 = f1 * f2;
	f3.print();

	Fraction f4 = f1 * 2;
	f4.print();

	Fraction f5 = 2 * f2;
	f5.print();

	Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
	f6.print();
}
