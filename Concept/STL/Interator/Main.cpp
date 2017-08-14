#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <string>


int main()
{
	using namespace std;
	vector<int> vect;
	for (int count = 0; count < 6; ++count)
		vect.push_back(count);

	vector<int>::const_iterator it;
	it = vect.begin();
	while (it != vect.end())
	{
		cout << *it << " ";
		++it;
	}

	cout << endl;

	list<int> li;
	for (int nCount = 0; nCount < 6; nCount++)
		li.push_back(nCount);

	list<int>::const_iterator it1; // declare an iterator
	it1 = li.begin(); // assign it to the start of the list
	while (it1 != li.end()) // while it hasn't reach the end
	{
		cout << *it1 << " "; // print the value of the element it points to
		++it1; // and iterate to the next element
	}

	cout << endl;

	set<int> myset;
	myset.insert(7);
	myset.insert(2);
	myset.insert(-6);
	myset.insert(8);
	myset.insert(1);
	myset.insert(-4);

	set<int>::const_iterator it2; // declare an iterator
	it2 = myset.begin(); // assign it to the start of the set
	while (it2 != myset.end()) // while it hasn't reach the end
	{
		cout << *it2 << " "; // print the value of the element it points to
		++it2; // and iterate to the next element
	}
	cout << endl;

	map <int, string> mymap;
	mymap.insert(make_pair(4, "apple"));
	mymap.insert(make_pair(2, "orange"));
	mymap.insert(make_pair(1, "banana"));
	mymap.insert(make_pair(3, "grapes"));
	mymap.insert(make_pair(6, "mango"));
	mymap.insert(make_pair(5, "peach"));

	map<int, string>::const_iterator it4; // declare an iterator
	it4 = mymap.begin(); // assign it to the start of the vector
	while (it4 != mymap.end()) // while it hasn't reach the end
	{
		cout << it4->first << "=" << it4->second << " "; // print the value of the element it points to
		++it4; // and iterate to the next element
	}

	cout << endl;
}
