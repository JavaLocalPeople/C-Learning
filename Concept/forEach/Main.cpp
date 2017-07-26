int main()
{
	std::string names[] = { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred"
	, "Greg", "Holly"};

	std::cout << "Enter a name: ";
	std::string userName;
	std::cin >> userName;

	for (const auto &curName : names)
	{
		if (userName == curName)
		{
			std::cout << userName << " was found.\n";
			return 0;
		}
	}

	std::cout << userName << " was not found.\n";
	return 0;

}
