#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
																				 // evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

class Creature
{
protected:
	std::string m_name;
	char m_symbol;
	int m_health;
	int m_damage;
	int m_gold;

public:
	Creature(std::string name, char symbol, int health, int damage, int gold) :
		m_name(name), m_symbol(symbol), m_health(health), m_damage(damage), m_gold(gold)
	{}

	std::string getName() { return m_name; }
	char getSymbol() { return m_symbol; }
	int getHealth() { return m_health; }
	int getDamage() { return m_damage; }
	int getGold() { return m_gold; }

	void reduceHealth(int amount) { m_health -= amount; }
	bool isDead() { return m_health <= 0 ? true : false;  }
	void addGold(int amount) { m_gold += amount; }

};

class Player : public Creature
{
private:
	int m_level = 1;

public:
	Player(std::string name) :
		Creature(name, '@', 10, 1, 0)
	{}

	void levelUp()
	{
		/*Creature::getDamage*/
		m_level++;
		m_damage++;
		std::cout << "You level up! Now the level is " << m_level << '\n.';
	}

	int getLevel() { return m_level; }

	bool hasWon() { return m_level == 20 ? true : false; }
};

class Monster : public Creature
{
public:
	enum Monster_Types {
		DRAGON,
		ORC,
		SLIME,
		MAX_TYPES
	};

	struct MonsterData {
		std::string s_name;
		char s_symbol;
		int s_health;
		int s_damage;
		int s_gold;
	};

	static MonsterData monsterData[MAX_TYPES];

	Monster(Monster_Types type) : Creature(monsterData[type].s_name, monsterData[type].s_symbol,
		monsterData[type].s_health, monsterData[type].s_damage, monsterData[type].s_gold)
	{}

	// Generate a random number between min and max (inclusive)
	// Assumes srand() has already been called
	
	Monster static getRandomMonster() {
		
		return Monster(static_cast<Monster_Types>(getRandomNumber(0, MAX_TYPES-1)));
	}

};

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
	{ "dragon", 'D', 20, 4, 100 },
	{ "orc", 'o', 4, 2, 25 },
	{ "slime", 's', 1, 1, 10 }
};

void attackPlayer(Player &p, Monster &m)
{
	// If the monster is dead, it can't attack the player
	if (m.isDead())
		return;

	p.reduceHealth(m.getDamage());
	std::cout << "The " << m.getName() << " hit you " << m.getDamage() << " and with " << m.getGold() << " gold.\n";
}

void attackMonster(Player &p, Monster &m) {

	m.reduceHealth(p.getDamage());
	std::cout << "You hit the " << m.getName() << " for " << p.getDamage() << " damage.\n";

	if (m.isDead())
	{
		std::cout << "You killed the " << m.getName() << '.\n';
		m.addGold(m.getGold());
		std::cout << "You got " << m.getGold() << " of gold. The overall gold you have is "
			<< p.getGold() << '\n.';
		p.levelUp();
	}
}

void fightMonster(Player &p)
{
	Monster m = Monster::getRandomMonster();
	std::cout << "You have encountered a " << m.getName() << " (" << m.getSymbol() << ").\n";
	char choice;

	do {
		std::cout << "You want to run(r) or fight(f): ";
		std::cin >> choice;
	} while (choice != 'r' && choice != 'f');
	
	while (!m.isDead() && !p.isDead())
	{
		if (choice == 'r') {
			int chance = getRandomNumber(0, 9);
			if (chance < 5) {
				std::cout << "You failed to flee.\n";
				attackPlayer(p, m);
			}
			else {
				std::cout << "You managed to flee!\n";
				return;
			}
		}
		// choose fight
		else {
			attackMonster(p, m);
			attackPlayer(p, m);
		}
	}
	
}
	




int main()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // get rid of first result

	std::cout << "Enter your name: ";
	std::string name;
	std::cin >> name;
	std::cout << "Welcome: " + name + '\n';

	Player p(name);

	while (!p.hasWon() && !p.isDead()) {
		fightMonster(p);
	}

	if (p.isDead())
	{
		std::cout << "You died at level " << p.getLevel() << " and with " << p.getGold() << " gold.\n";
		std::cout << "Too bad you can't take it with you!\n";
	}
	else
	{
		std::cout << "You won the game with " << p.getGold() << " gold!\n";
	}
}
