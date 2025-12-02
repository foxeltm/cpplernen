#include <iostream>

int main()
{	
	srand(time(NULL));

	int num1 = (rand() % 20) + 1;
	int num2 = (rand() % 20) + 1;
	int num3 = (rand() % 20) + 1;
		

	std::cout << "Random number: " << num1 << std::endl;
	std::cout << "Random number: " << num2 << std::endl;
	std::cout << "Random number: " << num3 << std::endl;


	std::cin.get();
}