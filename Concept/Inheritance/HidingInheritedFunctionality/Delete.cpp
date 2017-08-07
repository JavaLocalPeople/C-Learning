#include <iostream>
class Base
{
private:
	int m_value;
 
public:
	Base(int value)
		: m_value(value)
	{
	}
 
	int getValue() { return m_value; }
};
 
class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{
	}
 
 
	int getValue() = delete; // mark this function as inaccessible
};
 
int main()
{
	Derived derived(7);
 
	// The following won't work because getValue() has been deleted!
	std::cout << derived.getValue();
 
	return 0;
}
In the abov
