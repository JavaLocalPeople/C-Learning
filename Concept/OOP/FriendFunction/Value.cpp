#include <string>
#include <iostream>
#include <cassert>

class Value
{
private:
	int m_value;
public:
	Value(int value) { m_value = value; }
	friend bool isEqual(const Value &value1, const Value &value2);
};

bool isEqual(const Value &value1, const Value &value2)
{
	return (value1.m_value == value2.m_value);
}
