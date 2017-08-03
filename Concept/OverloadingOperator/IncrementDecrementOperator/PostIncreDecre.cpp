#include <iostream>

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0)
		: m_digit(digit)
	{

	}

	// pre
	Digit& operator++();
	Digit& operator--();

	// post
	Digit operator++(int); // postfix
	Digit operator--(int);

	friend std::ostream& operator<< (std::ostream &out, const Digit &d);
};

Digit& Digit::operator++()
{
	if (m_digit == 9)
		m_digit = 0;
	else
		m_digit++;

	return *this;
}

Digit& Digit::operator--()
{
	if (m_digit == 0)
		m_digit = 9;
	else
		m_digit--;

	return *this;
}

Digit Digit::operator++(int)
{    
	// Create a temporary variable with our current digit
	Digit temp(m_digit);

	// Use prefix operator to increment this digit
	++(*this);

	// return temporary result
	return temp;
}

Digit Digit::operator--(int)
{
	Digit temp(m_digit);

	--(*this);

	return temp;
}

std::ostream& operator<< (std::ostream &out, const Digit &d)
{
	out << d.m_digit;
	return out;
}

int main()
{
	Digit digit(5);

	std::cout << digit;
	std::cout << ++digit; // calls Digit::operator++();
	std::cout << digit++; // calls Digit::operator++(int);
	std::cout << digit;
	std::cout << --digit; // calls Digit::operator--();
	std::cout << digit--; // calls Digit::operator--(int);
	std::cout << digit;

	return 0;
}
