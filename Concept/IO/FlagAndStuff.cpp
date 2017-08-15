#include <string>
#include <iostream>

using namespace std;

int main()
{
	cout.setf(ios::showpos);
	cout << 27 << endl;
	cout.unsetf(ios::showpos); // turn off the ios::showpos flag
	cout << 28 << endl;

	// Turn on ios::hex as the only ios::basefield flag
	cout.setf(ios::hex, ios::basefield);
	cout << 27 << endl;



	cout << hex << 27 << endl; // print 27 in hex
	cout << 28 << endl; // we're still in hex
	cout << dec << 29 << endl; // back to decimal

	cout << true << " " << false << endl;

	cout.setf(ios::boolalpha);
	cout << true << " " << false << endl;

	cout << noboolalpha << true << " " << false << endl;

	cout << boolalpha << true << " " << false << endl;
}
