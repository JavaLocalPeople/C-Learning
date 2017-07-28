#include <algorithm> // for std::swap, use <utility> instead if C++11
#include <iostream>

bool ascending(int x, int y)
{
	return x > y; // swap if the first element is greater than the second
}

bool descending(int x, int y)
{
	return x < y; // swap if the second element is greater than the first
}

void printArray(int *array, int size)
{
	for (int index = 0; index < size; ++index)
		std::cout << array[index] << " ";
	std::cout << '\n';
}


void selectionSort(int *array, int size, bool(*comparisonFcn)(int, int))
{
	// Step through each element of the array
	for (int startIndex = 0; startIndex < size; ++startIndex)
	{
		// smallestIndex is the index of the smallest element we've encountered so far.
		int bestIndex = startIndex;

		// Look for smallest element remaining in the array (starting at startIndex+1)
		for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
		{
			// If the current element is smaller than our previously found smallest
			if (comparisonFcn(array[bestIndex], array[currentIndex])) // COMPARISON DONE HERE
															// This is the new smallest number for this iteration
				bestIndex = currentIndex;
		}

		// Swap our start element with our smallest element
		std::swap(array[startIndex], array[bestIndex]);
	}
}

bool evensFirst(int x, int y)
{
	// if x is even and y is odd, x goes first (no swap needed)
	if ((x % 2 == 0) && !(y % 2 == 0))
		return false;

	// if x is odd and y is even, y goes first (swap needed)
	if (!(x % 2 == 0) && (y % 2 == 0))
		return true;

	// otherwise sort in ascending order
	return ascending(x, y);
}

int main()
{
	int array[9] = { 3, 7, 9, 5, 6, 1, 8, 2, 4 };
	
	// Sort the array in descending order using the descending() function
	selectionSort(array, 9, descending);
	printArray(array, 9);

	// Sort the array in ascending order using the ascending() function
	selectionSort(array, 9, ascending);
	printArray(array, 9);

	// hook up with other functions
	selectionSort(array, 9, evensFirst);
	printArray(array, 9);

	// Default the sort to ascending sort
	void selectionSort(int *array, int size, bool(*comparisonFcn)(int, int) = ascending);

	using validateFcn = bool(*)(int, int);
	bool validate(int nX, int nY, validateFcn pfcn); // clean

}



