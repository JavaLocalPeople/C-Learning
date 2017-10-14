//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Optimized C++
//----------------------------------------------------------------------------- 
#include <vector>
#include "Trace.h"
#include <string>
// Modify This File

using std::vector;

class Point {
public:

	Point() = default;

	Point(const float inX, const float inY) :
		x(inX), y(inY) 
	{}

private:
	float x;
	float y;
};

int main() {
	vector<int> iVec;
	iVec.push_back(10);
	iVec.push_back(20);
	iVec.push_back(30);
	iVec.push_back(40);

	// START
	vector<int>::iterator  iter;

	printf("%s\n", "Below is iteration through vector");

	for (iter = iVec.begin(); iter != iVec.end(); ++iter) {
		printf("%d ", *iter);
	}

	printf("\n");
	// END

	// START
	printf("%s\n", "Below is reverse iteration through vector");

	vector<int>::reverse_iterator  riter;

	for (riter = iVec.rbegin(); riter != iVec.rend(); ++riter) {
		printf("%d ", *riter);
	}

	printf("\n");
	// END

	// START
	//vector<type>  name(n, value)
	vector<double> xvec(5, 1.5); // 5 copies of 1.5
	
	vector<double>::iterator  diter;


	printf("%s\n", "Below is iteration through vector(double)");

	for (diter = xvec.begin(); diter != xvec.end(); ++diter) {
		printf("%f ", *diter);
	}

	printf("\n");

	// END

	// START
	//vector<type>  name(first_iter, last_iter)
	std::string arr[4] = { "John", "Paul", "George", "Ringo" };
	vector<std::string> beatVec(arr, arr + 4);

	vector<std::string>::iterator  siter;

	printf("%s\n", "Below is iteration through vector(string)");

	for (siter = beatVec.begin(); siter != beatVec.end(); ++siter) {
		std::string myString = *siter;
		printf("%s ", myString.c_str());
	}

	printf("\n");

	// END

	// START

	/*vector<Point> pt_vec = {
		Point(1.0, 3.5), Point(1, 0), Point(1, 3.141592)
	};*/
	
	// END

	// START

	vector<std::string> strVec(5, "hi");\
	// assign 3 copies of "hello", replacing old contents
	strVec.assign(3, "hello");

	printf("%s\n", "Below is iteration through assign(string)");

	for (siter = strVec.begin(); siter != strVec.end(); ++siter) {
		std::string myString = *siter;
		printf("%s ", myString.c_str());
	}

	printf("\n");

	// END

	// START
	std::string clowns[3] = { "Moe", "Larry", "Curly" };
	vector<std::string>  clownVec;
	clownVec.assign(clowns, clowns + 3);

	printf("%s\n", "Below is iteration through assign2(string)");

	/*for (siter = clownVec.begin(); siter != clownVec.end(); ++siter) {
		std::string myString = *siter;
		printf("%s ", myString.c_str());
	}*/

	// another way to get access of the vector
	for (size_t i = 0; i < clownVec.size(); ++i)
	{
		std::string myString = clownVec.at(i);
		printf("%s ", myString.c_str());
	}

	printf("\n");

	std::string myString = clownVec.back();
	printf("%s\n", "Below is get the last of assign2(string)");
	printf("%s\n", myString.c_str());



	// END

	// START

	clownVec.clear();
	if (clownVec.empty()) {
		printf("%s\n", "This vector<string> is empty!!");
	}

	// END

	// START

	printf("%s\n", "Original before erase");
	std::string clowns2[] = { "Moe", "Larry", "Curly" };
	vector<std::string>  clownVec2(clowns, clowns + 3);
	for (size_t i = 0; i < clownVec2.size(); ++i)
	{
		std::string myString2 = clownVec2.at(i);
		printf("%s ", myString2.c_str());
	}
	printf("\n");

	clownVec2.erase(clownVec2.begin() + 1);

	printf("%s\n", "Below is to erase");
	for (size_t i = 0; i < clownVec2.size(); ++i)
	{
		std::string myString2 = clownVec2.at(i);
		printf("%s ", myString2.c_str());
	}
	printf("\n");
	// END
	getchar(); 
	
	return 0;
}

// ---  End of File ---------------
