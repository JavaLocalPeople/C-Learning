#include <iostream>

template <class T>
class Storage
{
private:
	T m_value;
public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{
	}

	void print()
	{
		std::cout << m_value << '\n';
	}
};

template <>
void Storage<double>::print()
{
	std::cout << std::scientific << m_value << '\n';
}

template<> 
Storage<char*>::Storage(char* value)
{
	int length = 0;
	while (value[length] != 0)
		++length;
	++length; // +1 to account for null terminator

	m_value = new char[length];

	for (int count = 0; count < length; ++count)
		m_value[count] = value[count];
}

template<>
Storage<char*>::~Storage()
{
	delete[] m_value;
}

int main()
{
	char *string = new char[40];

	std::cout << "Enter your name: ";
	std::cin >> string;

	Storage<char*> value(string);

	delete[] string;

	value.print();
}
