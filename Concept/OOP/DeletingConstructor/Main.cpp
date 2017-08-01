#include <string>
#include <iostream>

class Employee
{
private:
	int m_id;
	std::string m_name;

public:
	Employee(int id = 0, std::string name = "") :
		m_id(id), m_name(name)
	{
		std::cout << "Employee " << m_name << " created.\n";
	}

	Employee(std::string name):Employee(0,name) {}
};
