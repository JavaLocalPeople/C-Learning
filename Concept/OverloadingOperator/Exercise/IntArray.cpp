#include <iostream>
#include <cassert>

class IntArray
{
private:
	int m_length = 0;
	int *m_data = nullptr;
public:
	IntArray(int length) :
		m_length(length)
	{
		assert(length > 0 && "IntArray length should be a positive integer");
		m_data = new int[m_length] {0};
	}

	// Deep Copy for Copy Constructor
	IntArray(const IntArray &copy)
	{
		m_length = copy.m_length;

		
		m_data = new int[m_length];
		for (int i = 0; i <copy.m_length; ++i)
		{
			m_data[i] = copy.m_data[i];
		}
	
	
	}

	~IntArray()
	{
		delete[] m_data;
	}

	friend std::ostream& operator<<(std::ostream &out, const IntArray &intArray)
	{
		for (int count = 0; count < intArray.m_length; ++count)
		{
			out << intArray.m_data[count] << " ";
		}
		return out;
	}

	int& operator[](int index)
	{
		assert(index >= 0);
		assert(index < m_length);
		return m_data[index];
	}

	//Deep Copy of Assignment Operator
	IntArray& operator=(const IntArray &intArray)
	{
		if (this == &intArray)
			return *this;

		delete[] m_data;

		m_length = intArray.m_length;

		for (int i = 0; i <intArray.m_length; ++i)
		{
			m_data[i] = intArray.m_data[i];
		}

		return *this;
	}
};

IntArray fillArray()
{
	IntArray a(5);
	a[0] = 5;
	a[1] = 8;
	a[2] = 2;
	a[3] = 3;
	a[4] = 6;

	return a;
}

int main()
{
	IntArray a = fillArray();
	std::cout << a << '\n';

	IntArray b(1);
	a = a;
	b = a;

	std::cout << b << '\n';

	return 0;
}
