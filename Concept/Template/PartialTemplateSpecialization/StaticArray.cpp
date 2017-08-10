
#include <iostream>
#include <cstring>

template <class T, int size>
class StaticArray
{
private:
	T m_array[size];

public:
	T* getArray() { return m_array; }

	T& operator[] (int index)
	{
		return m_array[index];
	}
};

template<typename T, int size>
void print(StaticArray<T, size> &array)
{
	for (int count = 0; count < size; ++count)
		std::cout << array[count] << ' ';
}

template<int size>
void print(StaticArray<char, size> &array)
{
	for (int count = 0; count < size; ++count)
		std::cout << array[count];
}


int main()
{
	// Declare an char array of size 14
	StaticArray<char, 14> char14;

	strcpy_s(char14.getArray(), 14, "Hello, world!");

	// Print the array
	print(char14);

	// Now declare an char array of size 12
	StaticArray<char, 12> char12;

	strcpy_s(char12.getArray(), 12, "Hello, mom!");

	// Print the array
	print(char12);

	return 0;
}
