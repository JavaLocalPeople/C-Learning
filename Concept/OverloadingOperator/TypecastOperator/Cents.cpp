#include <iostream>

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	//Overload int cast
	operator int() { return m_cents; }

	int getCents() { return m_cents; }
	void setCents(int cents) { m_cents = cents; }
};

int main()
{
	Cents cent(7);
	int c = static_cast<int>(cent);

}
