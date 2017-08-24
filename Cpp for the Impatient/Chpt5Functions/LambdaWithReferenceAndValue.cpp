


int main() {
	int my_id = 5000;

	auto fun = [&my_id](int n) { my_id += n; return my_id; } // capture fun
	fun(5);
	cout << "my_id is now " << my_id;   // Print 5005.

	int sum = 4;
	auto f = [&](int n) {sum += n; }

	f(25);
	cout << sum << endl;   // Print 125.


}
