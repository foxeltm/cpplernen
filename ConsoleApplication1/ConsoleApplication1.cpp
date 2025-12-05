#include <iostream>
#include <ctime>

int main()
{
	//std::string students[] = { "Alice", "Bob", "Charlie", "Diana", "Ethan", "sandy" };
	//int grades[] = { 85, 92, 78, 90, 88, 76 };
	std::string friends[] = { "theo", "dominik", "marvin", "boern"};

	for (std::string freund : friends)
	{
		std::cout << freund << '\n';
	}


	std::cin.get();
}