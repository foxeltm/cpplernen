#include <iostream>
#include <ctime>

int main()
{
	//std::string students[] = { "Alice", "Bob", "Charlie", "Diana", "Ethan", "sandy"};
	char grades[] = { 'A', 'B', 'C', 'D', 'F' };

	for (int i = 0; i < sizeof(grades)/sizeof(char); i++)
	{
		std::cout << grades[i] << '\n';
	}
	

	std::cin.get();
}