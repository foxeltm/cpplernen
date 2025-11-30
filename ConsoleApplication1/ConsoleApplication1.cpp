#include <iostream>

int main()
{
	//int grade;
	//(grade >= 60) ? std::cout << "Passed\n" : std::cout << "Failed\n";

	//int number = 9;
	//number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

	bool hungry = true;

	//hungry ? std::cout << "Feed me!" : std::cout << "I'm not hungry";
	std::cout << (hungry ? "Feed me!" : "I'm not hungry");

	std::cin.get();
}