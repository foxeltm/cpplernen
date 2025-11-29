#include <iostream>
#include <cmath>

int main () 
{
	char grade;

	std::cout << "What letter grade?: ";
	std::cin >> grade;

	switch(grade) 
	{
		case 'A':
			std::cout << "Excellent!" << std::endl;
			break;
		case 'B':
			std::cout << "Well done" << std::endl;
			break;
		case 'C':	
			std::cout << "Good" << std::endl;
			break;
		case 'D':
			std::cout << "You passed" << std::endl;
			break;
		case 'F':
			std::cout << "Better try again" << std::endl;
			break;
		default:
			std::cout << "Invalid grade" << std::endl;

	}
	


	std::cin.get();
}