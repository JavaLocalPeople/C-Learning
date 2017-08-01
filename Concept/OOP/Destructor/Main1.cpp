#include <string>
#include <iostream>
#include <cassert>

class Simple
{
private:
	int m_nID;
public:
	Simple(int nID)
	{
		std::cout << "Constructing Simple " << nID << '\n';
		m_nID = nID;
	}

	~Simple()
	{
		std::cout << "Destructing Simple" << m_nID << '\n';
	}

	int getID() { return m_nID; }

};

int main() {
	Simple simple(1);
	std::cout << simple.getID() << '\n';

	Simple *pSimple = new Simple(2);
	std::cout << pSimple->getID() << '\n';
	delete pSimple;

}
