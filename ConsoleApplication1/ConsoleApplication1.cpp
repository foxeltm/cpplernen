#include <iostream>

int main()
{	

	int number;
 
	do{
		std::cout << "Enter a positiv number ";
		std::cin >> number;

	}while(number < 0)

	std::cout << number;

	std::cin.get();
}