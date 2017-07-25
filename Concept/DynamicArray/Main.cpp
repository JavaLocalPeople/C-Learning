#include <iostream>
#include <string>

void sortArray(std::string *array, int length)
{
	for (int start = 0; start < length; ++start)
	{
		int smallIndex = start;
		for (int current = start + 1; current < length; ++current)
		{
			if (array[current] < array[smallIndex])
			{
				smallIndex = current;
			}
		}

		std::swap(array[start], array[smallIndex]);
	}
}

int main()
{
	std::cout << "How many names would you like to enter: ";
	int length;
	std::cin >> length;

	std::string *array = new std::string[length]; // use array new.  Note that length does not need to be constant!

	for (int i = 0; i < length; ++i) {
		std::cout << "Enter name #" << i + 1 << ": ";
		std::cin >> array[i];
	}

	sortArray(array, length);

	for (int i = 0; i < length; ++i)
		std::cout << "Name #" << i + 1 << ": " << array[i] << '\n';

	delete[] array; // use array delete to deallocate array
	array = nullptr; // use nullptr instead of 0 in C++11

	return 0;
}
