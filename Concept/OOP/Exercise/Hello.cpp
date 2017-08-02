#include <iostream>

class HelloWorld
{
private:
	char *m_data;
public:
	HelloWorld()
	{
		m_data = new char[14]{ 'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0' };
	}

	~HelloWorld()
	{
		delete[] m_data;
	}

	void print()
	{
		std::cout << m_data;
	}
};

int main()
{
	HelloWorld hello;
	hello.print();

	return 0;
}
