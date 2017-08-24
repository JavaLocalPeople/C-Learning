#include <functional>
#include <iostream>

using namespace std;

function<int(int, int)> get_fun() {
	int n = 10;
	return [n](int a, int b) {return a + b + n; };
}

int main()
{
	auto f = get_fun();
	cout << f(1, 2) << endl;
}
