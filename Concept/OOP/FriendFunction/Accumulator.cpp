#include <string>
#include <iostream>
#include <cassert>

class Accumulator
{
private:
	int m_value;
public:
	Accumulator() { m_value = 0; }
	void add(int value) { m_value += value; }

	// Make the reset() function a friend of this class because reset() is not a member function.
	//Q1. Have to pass an Accumulator object
	friend void reset(Accumulator &accumulator);
};

// reset() is now a friend of the Accumulator class
void reset(Accumulator &accumulator)
{
	// and can access the private data of Accumulator objects
	accumulator.m_value = 0;
}

int main()
{
	Accumulator acc;
	acc.add(5); // add 5 to the accumulator
	reset(acc);

}
