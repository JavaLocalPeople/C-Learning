#include <cstdint>
#include <iostream>

class Rectangle
{
private:
	double m_length = 1.0; // m_length has a default value of 1.0
	double m_width = 1.0;

public:
	Rectangle()
	{
		// This constructor will use the default values above since they aren't overridden here
	}

	void print()
	{
		std::cout << "length: " << m_length << ", width: " << m_width << '\n';
	}
};

int main() {
	Rectangle x;
	x.print();
}
