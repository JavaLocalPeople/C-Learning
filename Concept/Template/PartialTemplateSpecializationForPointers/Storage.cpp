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

template<>
Storage<char*>::Storage(char* value)
{
	int length = 0;
	while (value[length] != '\0')
		++length;
	++length;

	m_value = new char[length];

	for (int count = 0; count < length; ++count)
		m_value[count] = value[count];
}

template<>
Storage<char*>::~Storage()
{
	delete[] m_value;
}

template<typename T>
class Storage<T*>
{
private:
	T* m_value;

public:
	Storage(T* value)
	{
		m_value = new T(*value);
	}

	~Storage()
	{
		delete m_value;
	}

	void print()
	{
		std::cout << *m_value << '\n';
	}
};

int main()
{
	// Declare a non-pointer Storage to show it works
	Storage<int> myint(5);
	myint.print();

	// Declare a pointer Storage to show it works
	int x = 7;
	Storage<int*> myintptr(&x);

	// If myintptr did a pointer assignment on x,
	// then changing x will change myintptr too
	x = 9;
	myintptr.print();

	return 0;
}
