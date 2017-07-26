int getSingleIndex(int row, int col, int numberOfColumnsInArray)
{
	return (row * numberOfColumnsInArray) + col;
}

int main()
{
	int value = 5;
	int *ptr = &value;

	std::cout << *ptr;  // dereference pointer to int to get int value

	int **ptrptr = &ptr;
	std::cout << **ptrptr; // first dereference to get pointer to int, 
	//second dereference to get int value

	int **array = new int*[10];

	// two dimentional array
	int(*array)[5] = new int[10][5];
	int **array = new int*[10];
	for (int count = 0; count < 10; ++count)
	{
		array[count] = new int[count + 1];
	}

	// delete two dimentional array
	for (int count = 0; count < 10; ++count)
	{
		delete[] array[count];
	}
	delete[] array;

	// Do this to flatten two dimentional array
	int *array = new int[50]; // a 10x5 array flattened into a single array

	// set array[9,4] to 3 using our flattened array
	// array[getSingleIndex(9, 4, 5)] = 3;
}

