#include <iostream>

struct DataStruct
{
	int year;
	int month;
	int day;
};

// effectively identical
class DataClass
{
public:
	int m_year;
	int m_month;
	int m_day;

	void print() // defines a member function name print()
	{
		std::cout << m_year << "/" << m_month << "/" << m_day;
	}
};

void print(DataStruct &data)
{
	std::cout << data.year << '/' << data.month << "/" << data.day;
}

int main()
{
	DataStruct today{ 2020, 10, 24 };
	today.day = 16;
	print(today);

	DataClass tomorrow{ 2020, 10, 25 };
	tomorrow.m_day = 22;
	tomorrow.print();

}
