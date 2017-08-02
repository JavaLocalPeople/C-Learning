#include <iostream>
#include <string>
#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()


class Monster
{

public:
	enum MonsterType
	{
		DRAGON,
		GOBLIN,
		OGRE,
		ORC,
		SKELETON,
		TROLL,
		VAMPIRE,
		ZOMBIE,
		MAX_MONSTER_TYPES
	};

private:
	MonsterType m_type;
	std::string m_name;
	std::string m_roar;
	int m_point;

public:
	Monster(MonsterType type, std::string name, std::string roar, int point)
		: m_type(type), m_name(name), m_roar(roar), m_point(point)
	{}

	std::string getTypeString()
	{
		switch (m_type)
		{
		case DRAGON: return "dragon";
		case GOBLIN: return "goblin";
		case OGRE: return "ogre";
		case ORC: return "orc";
		case SKELETON: return "skeleton";
		case TROLL: return "troll";
		case VAMPIRE: return "vampire";
		case ZOMBIE: return "zombie";
		}
	}

	void print()
	{
		std::cout << m_name << " the " << getTypeString() << " has " << m_point << " hit points and says " << m_roar << std::endl;
	}
};

class MonsterGenerator
{
public:
	static Monster generateMonster() {
		Monster::MonsterType r_monster = static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPES-1));
		int r_hitPoints = getRandomNumber(1, 100);
		static std::string r_names[6] = { "Jack", "Bob", "Sam", "Susan", "Dave", "Jones" };
		static std::string r_noises[6] = { "Wow", "Boo", "Xixi", "Haha", "Lol", "Dommm" };

		return Monster(r_monster, r_names[getRandomNumber(0, 5)], r_noises[getRandomNumber(0, 5)], r_hitPoints);
	}

	// Generate a random number between min and max (inclusive)
	// Assumes srand() has already been called
	static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
																					 // evenly distribute the random number across our range
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}
};

int main()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // If using Visual Studio, discard first random value
	Monster m = MonsterGenerator::generateMonster();
	m.print();
}
