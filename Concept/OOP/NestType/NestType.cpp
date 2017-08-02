// #include <string>
#include <iostream>
// #include <cassert>



class Fruit
{
public:
	enum FruitType
	{
		APPLE,
		BANANA,
		CHERRY
	};
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
	Fruit apple(Fruit::APPLE);

	if (apple.getType() == Fruit::APPLE)
	{
		std::cout << "I am an apple";
	}
	else {
		std::cout << "I am not an apple";
	}
}
