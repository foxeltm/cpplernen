#include <iostream>

int main()
{	

	bool playagain = true;

	std::cout << "XXXXXXX Temperature conversion XXXXXXX\n";

	while (playagain)
	{
		double temp;
		char unit;

		std::cout << "F = Fahrenheit\n";
		std::cout << "C = Celsius\n";
		std::cout << "what unit would you like to convert to ";
		std::cin >> unit;

		if (unit == 'F' || unit == 'f')
		{
			std::cout << "Enter temperature in Celsius: ";
			std::cin >> temp;

			temp = (1.8 * temp) + 32;
			std::cout << "Temperature in Fahrenheit: " << temp << " F\n";
		}
		else if (unit == 'C' || unit == 'c')
		{
			std::cout << "Enter temperature in Fahrenheit: ";
			std::cin >> temp;

			temp = (temp - 32) / 1.8;
			std::cout << "Temperature in Celsius: " << temp << " C\n";
		}
		else
		{
			std::cout << "Invalid unit entered.\n please enter C or F\n";
		}

		std::cout << "Would you like to convert another temperature? (y/n): ";
		
		char response;
		std::cin >> response;

		if(response == 'n' || response == 'N')
		{
			playagain = false;
		}
		else if (response == 'y' || response == 'Y')
		{
			playagain = true;
		}
		else
		{
			std::cout << "Invalid response. Exiting the program.\n";
			playagain = false;
		}


	}


	


	std::cin.get();
}