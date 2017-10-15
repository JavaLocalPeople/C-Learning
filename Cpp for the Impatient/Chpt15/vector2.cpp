#include <vector>
#include "Trace.h"
#include <string>
// Modify This File

using std::vector;

int main() {

	// START

	// initialize array
	int arr[5] = { 10, -104, 20, -555, 30 };

	// copy array to vector
	vector<int> my_ints(arr, arr + 5);

	// iterator header
	vector<int>::iterator it;
	for (it = my_ints.begin(); it != my_ints.end();) {
		if (*it < 0) {
			it = my_ints.erase(it);
		}
		else {
			++it;
		}
	}

	for (it = my_ints.begin(); it != my_ints.end(); ++it) {
		printf("%d ", *it);
	}

	printf("\n");

	// END

	// START
	std::string clowns[] = { "Moe", "Larry", "Curly" };
	vector<std::string>  clownVec(clowns, clowns + 3);
	vector<std::string>::iterator itiot = clownVec.begin();
	// Get rid of Moe and Larry!
	clownVec.erase(itiot, itiot + 2);

	for (itiot = clownVec.begin(); itiot != clownVec.end(); ++itiot) {
		std::string s = *itiot;
		printf("%s ", s.c_str());
	}

	printf("\n");

	// END

	// START

	int dat[] = { 10, 20, 30, 40, 50 };
	vector<int>  iVec2(dat, dat + 5);
	iVec2.insert(iVec2.begin() + 2, -111);

	for (it = iVec2.begin(); it != iVec2.end(); ++it) {
		printf("%d ", *it);
	}

	printf("\n");
	// END

	// START

	printf("%s\n", "Below insert beats");
	std::string rockers[3] = { "Mick", "Keith", "Hendrix" };
	std::string beats[4] =
	{ "John", "Paul", "George", "Ringo" };
	vector<std::string>  beatVec(beats, beats + 4);


	beatVec.insert(beatVec.begin() + 1, rockers, rockers + 3);
	vector<std::string>::iterator beattiot = beatVec.begin();

	for (beattiot = beatVec.begin(); beattiot != beatVec.end(); ++beattiot) {
		std::string s = *beattiot;
		printf("%s ", s.c_str());
	}
	// END
	

	getchar(); 
	
	return 0;
}

// ---  End of File ---------------
