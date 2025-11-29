#include <iostream>
#include <cmath>

int main () 
{
	bool playagain = true;

	while (playagain)
	{
		double a;
		double b;
		double c;

		std::cout << "enter side a ";
		std::cin >> a;

		std::cout << "enter side b ";
		std::cin >> b;

		c = std::sqrt(pow(a, 2) + pow(b, 2));

		std::cout << "hypotenuse = " << c << std::endl;

		std::cout << "play again? (1 = yes, 0 = no) ";

		int answer;

		std::cin >> answer;
		
		if(answer == 0)
		{
			playagain = false;
		}
		else if (answer == 1)
		{
			playagain = true;
		}
		else
		{
			std::cout << "invalid input, exiting program." << std::endl;
			playagain = false;
		}

	}
	std::cin.get();
}