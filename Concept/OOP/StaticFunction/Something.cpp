#include <string>
#include <iostream>
#include <cassert>

class Something
{
private:
	static int s_value;
public:
	// static member function
	static int getValue() { return s_value; }
};

int Something::s_value = 1; // initializer

int main()
{
	std::cout << Something::getValue() << '\n';
}
