#include <string>
#include <vector>
#include <iostream>

class AddressBook
{
private:
	std::vector<std::string> _addresses;

public:
	template<typename Func>
	std::vector<std::string> findMatchingAddresses(Func func) {
		std::vector<std::string> results;
		for (auto itr = _addresses.begin(), _addresses.end(); itr != end; ++itr)
		{
			if (func(*itr))
				results.push_back(*itr);
		}
		return results;
	}


};

AddressBook global_address_book;



template<typename Func>
vector<string> findAddressesFromOrgs()
{
	return global_address_book.findMatchingAddresses(
		// we're declaring a lambda here; the [] signals the start
		[](const string& addr) { return addr.find(".org") != string::npos; }
	);
}


template<typename Func>

int main() {

	std::string name;
	std::cin >> name;
	return global_address_book.findMatchingAddresses(

		[&](const string& addr) { return addr.find(name) != std::string::npos; }
	);

	int min_len = 0;
	std::cin >> min_len;
	return global_address_book.findMatchingAddresses(
		[&](const string& addr) {return addr.length() >= min_len; }
	);


}
