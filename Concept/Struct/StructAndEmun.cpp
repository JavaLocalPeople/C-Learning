#include <iostream>
#include <string>

enum class MonsterType {
	ORGE,
	DRAGON,
	ORC,
	GAINTSPIDER,
	SLIME
};

struct Monster {
	MonsterType monsType;
	std::string name;
	int health;
};

std::string getMonsterType(Monster ms)
{
	if (ms.monsType == MonsterType::ORGE)
		return "Ogre";
	if (ms.monsType == MonsterType::DRAGON)
		return "Dragon";
	if (ms.monsType == MonsterType::ORC)
		return "Orc";
	if (ms.monsType == MonsterType::GAINTSPIDER)
		return "Giant Spider";
	if (ms.monsType == MonsterType::SLIME)
		return "Slime";

	return "Unknown";
}

void printMonster(Monster ms)
{
	std::cout << "This " << getMonsterType(ms) << " is named " << ms.name << " and has "
		<< ms.health << " health.";
}

int main(void)
{
	Monster ms1 { MonsterType::ORGE, "Trog", 145 };
	Monster ms2 { MonsterType::SLIME, "Blurp", 23 };

	printMonster(ms1);
	printMonster(ms2);

	return 0;
}
