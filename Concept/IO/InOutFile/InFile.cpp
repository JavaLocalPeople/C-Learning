#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
	using namespace std;

	ifstream inf("Sample.dat");

	if (!inf)
	{
		cerr << "Uh oh, Sample.dat could not be opened for reading!" << endl;
		exit(1);
	}

	while (inf)
	{
		std::string strInput;
		getline(inf, strInput);
		cout << strInput << endl;
	}
}
