#include <cctype>
#include <string>  
#include <iostream>  
using namespace std;

int main()
{
	while (1)
	{
		cout << "Enter your name: ";
		string strName;
		getline(cin, strName);

		bool bRejected = false;

		for (unsigned int index = 0; index < strName.length() && !bRejected; index++)
		{
			// If the current character is an alpha character, that's fine
			if (isalpha(strName[index]))
				continue;

			// If it's a space, that's fine too
			if (strName[index] == ' ')
				continue;

			// Otherwise we're rejecting this input
			bRejected = true;
		}
		if (!bRejected)
			break;
	}
}
