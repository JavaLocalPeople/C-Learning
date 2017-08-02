// #include <string>
#include <iostream>
// #include <cassert>

enum FruitType
{
	APPLE,
	BANANA,
	CHERRY
};

class Fruit
{
private:
	FruitType m_type;
	int m_percentageEaten = 0;
public:
	Fruit(FruitType type) :
		m_type(type)
	{}

	FruitType getType() { return m_type; }

	int getPercentageEaten() { return m_percentageEaten; }
};

int main()
{
	Fruit apple(APPLE);

	if (apple.getType() == APPLE)
	{
		std::cout << "I am an apple";
	}
	else {
		std::cout << "I am not an apple";
	}
}
