#include <iostream>
#include <string>

enum class AnimalType {
	ANIMAL_PIG,
	ANIMAL_CHICKEN,
	ANIMAL_GOAT,
	ANIMAL_CAT,
	ANIMAL_DOG,
	ANIMAL_OSTRICH
};

std::string getAnimalName(AnimalType aT)
{
	switch (aT)
	{
	case AnimalType::ANIMAL_PIG:
		return "Pig";
	case AnimalType::ANIMAL_CAT:
		return "Cat";
	case AnimalType::ANIMAL_DOG:
		return "Dog";
	case AnimalType::ANIMAL_CHICKEN:
		return "Chicken";
	case AnimalType::ANIMAL_GOAT:
		return "Goat";
	case AnimalType::ANIMAL_OSTRICH:
		return "Ostrich";
	default:
		return "getAnimalName(): Invalid Animal Entered.";
	}
}

void printNumberOfLegs(AnimalType aT)
{

	std::cout << "A " << getAnimalName(aT) << " has ";

	switch (aT)
	{
		case AnimalType::ANIMAL_CHICKEN:
		case AnimalType::ANIMAL_OSTRICH:
		std::cout << "2";
		break;

		case AnimalType::ANIMAL_PIG:
		case AnimalType::ANIMAL_GOAT:
		case AnimalType::ANIMAL_CAT:
		case AnimalType::ANIMAL_DOG:
			std::cout << "4";
			break;

		default:
			std::cout << "printNumberOfLegs(): Unhandled enumerator";
			break;

			

	}

	std::cout << " legs.\n";
}


int main(void)
{
	printNumberOfLegs(AnimalType::ANIMAL_CAT);
	printNumberOfLegs(AnimalType::ANIMAL_CHICKEN);

	return 0;
}
