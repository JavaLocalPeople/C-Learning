#include <array>
#include <iostream>

// return by value
//When returning variables that were declared inside the function
//When returning function arguments that were passed by value
int doubleValue(int x)
{
	int value = x * 2;
	return value;
}

// return by address, 
//When returning dynamically allocated memory
//When returning function arguments that were passed by address
int* allocateArray(int size)
{
	return new int[size];
}

// return by reference
//When returning a reference parameter
//When returning an element from an array that was passed into the function
//When returning a large struct or class that will 
//not be destroyed at the end of the function(e.g.one that was passed in)

int& doubleValue2(int x)
{
	int value = x * 2;
	return value;// return a reference to value here
}

int& getElement(std::array<int, 25> &array, int index)
{
	return array[index];
}

int main()
{
	int *array = allocateArray(25);

	delete[] array;

	std::array<int, 25> array2;
	getElement(array2, 10) = 5;

	std::cout << array2[10] << '\n';

	return 0;
}

