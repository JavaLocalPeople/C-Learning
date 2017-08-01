#include <string>
#include <iostream>
#include <cassert>

class Calc
{
private:
	int m_value = 0;

public:

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);

	int getValue() { return m_value; }
};

Calc& Calc::add(int value)
{
	m_value += value;
	return *this;
}

Calc& Calc::sub(int value)
{
	m_value -= value;
	return *this;
}

Calc& Calc::mult(int value)
{
	m_value *= value;
	return *this;
}
