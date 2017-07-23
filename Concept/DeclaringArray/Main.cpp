int array[5];

const int arrayLength = 5;
int array[arrayLength];

enum ArrayElements
{
	MAX_ARRAY_LENGTH = 5
};

int array[MAX_ARRAY_LENGTH]; // Ok

int length;
std::cin >> length;
int array[length]; // Not ok -- length is not a compile-time constant!

// using a runtime const variable
int temp = 5;
const int length = temp;
int array[length]; // Not ok -- length is a runtime constant, not a compile-time constant!
