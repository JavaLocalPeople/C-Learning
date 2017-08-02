// #include <string>
#include <iostream>
// #include <cassert>
class Cents
{
private:
	int m_cents;
public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; }
};

Cents add(const Cents &c1, const Cents &c2)
{
	return Cents(c1.getCents() + c2.getCents());
	
}

int main() {
	
	/*Cents sum = add(cents1, cents2);
	std::cout << "I have " << sum.getCents() << " cents." << std::endl;*/
	std::cout << "I have " << add(Cents(6), Cents(4)).getCents() << " cents." << std::endl;
}
