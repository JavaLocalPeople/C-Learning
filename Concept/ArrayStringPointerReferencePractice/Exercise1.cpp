#include <iostream>
#include <vector>
#include <algorithm>

enum Items {
	HEALTHPOTIONS,
	TORCHES,
	ARROWS,
	MAXITEMS
};

int countTotalItems(int *carries)
{
	int total = 0;
	for (int i = 0; i < MAXITEMS; i++)
	{
		total += carries[i];
	}
	return total;
}

int main()
{
	int carries[MAXITEMS] = {2, 5, 10};


	std::cout << "The player has " << countTotalItems(carries) << " items in total.\n";

}







