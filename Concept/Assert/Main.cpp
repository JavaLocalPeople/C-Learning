#include <iostream>
#include <cassert>
#include <array>

// all assert() calls will now be ignored
// #define NOEBUG

int getArrayValue(const std::array<int, 10> &array, int index)
{
	// asserting that index is between 0 and 9
	// if getArrayValue(-3), will output Assertion failed: index >= 0 && index <=9,
	assert(index >= 0 && index <= 9);

	// assert trick
//	assert(found && "Car could not be found in database");

	//static_assert doing compile check, not run-time check as assert
	// static_assert(sizeof(long) == 8, "long must be 8 bytes");
	static_assert(sizeof(int) == 4, "int must be 4 bytes");


	return array[index];
}

