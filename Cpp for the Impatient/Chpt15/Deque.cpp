#include "Trace.h"
#include <deque>


int main() {
	
	printf("%s\n", "Below is a simple deque structure");

	int arr[5] = { 1, 100, 20, 50 ,25 };
	std::deque<int> dq(arr, arr + 5);
	std::deque<int>::iterator it;
	for (it = dq.begin(); it != dq.end(); ++it) {
		printf("%d ", *it);
	}
	
	printf("\n");
	// END

	// START
	std::deque<std::string>  strDeq;
	strDeq.push_back("hi");
	strDeq.push_back("there");

	// End
	getchar();

	return 0;
}
