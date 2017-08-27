#include <vector>
#include <iostream>


using namespace std;
int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);

	for (auto itr = v.begin(), end = v.end(); itr != end; itr++)
		cout << *itr;
	
	for_each(v.begin(), v.end(), [](int val)
	{
		cout << val;
	});

		

}
