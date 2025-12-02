#include <iostream>
#include <ctime>

int main()
{	
	srand(time(0));
	int randnum = rand() % 5 + 1;

	switch (randnum)
	{
		case 1:
			std::cout << "You win a sticker!" << std::endl;
			break;
		case 2:
			std::cout << "You win a pen!" << std::endl;
			break;
		case 3:
			std::cout << "You win a phone!" << std::endl;
			break;
		case 4:
			std::cout << "You win a laptop!" << std::endl;
			break;
		case 5:
			std::cout << "You win a car!" << std::endl;
			break;
	}


	std::cin.get();
}