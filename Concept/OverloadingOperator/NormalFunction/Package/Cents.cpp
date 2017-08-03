#include "Cents.h"

Cents operator+(const Cents &c1, const Cents &c2)
{
	// use the Cents constructor and operator+(int, int)
	// we don't need direct access to private members here
	return Cents(c1.getCents() + c2.getCents());
}
