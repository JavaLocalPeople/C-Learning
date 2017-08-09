#include <string>
#include <iostream>

class Animal
{
protected:
	std::string m_name;

	// We're making this constructor protected because
	// we don't want people creating Animal objects directly,
	// but we still want derived classes to be able to use it.
	Animal(std::string name)
		: m_name(name)
	{
	}

public:
	std::string getName() { return m_name; }
	virtual const char* speak() = 0; // note that speak is now a pure virtual function
};

const char* Animal::speak()
{
	return "buzz";
}

class Cat : public Animal
{
public:
	Cat(std::string name)
		: Animal(name)
	{
	}

	virtual const char* speak() { return "Meow"; }
};

class Dog : public Animal
{
public:
	Dog(std::string name)
		: Animal(name)
	{
	}

	virtual const char* speak() { return "Woof"; }
};

class Cow : public Animal
{
public:
	Cow(std::string name)
		: Animal(name)
	{
	}

	virtual const char* speak() { return "Moo"; }
};

class Dragonfly : public Animal
{

public:
	Dragonfly(std::string name)
		: Animal(name)
	{
	}

	virtual const char* speak() {
		return Animal::speak();
	}
};

int main()
{
	Cow cow("Betsy");
	std::cout << cow.getName() << " says " << cow.speak() << '\n';
}
