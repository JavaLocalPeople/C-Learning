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

class Dollars
{
private:
	int m_dollars;
public:
	Dollars(int dollars = 0)
	{
		m_dollars = dollars;
	}

	// Allow us to convert Dollars into Cents
	operator Cents() { return Cents(m_dollars * 100); }
};

void printCents(Cents cents)
{
	std::cout << cents; // cents will be implicitly cast to an int here
}
int main()
{
	Dollars dollars(9);
	printCents(dollars); // dollars will be implicitly cast to a Cents here

	return 0;
}
