#include <iostream>
#include <ctime>

int main()
{

	bool student = true;	
	char grade = 'F';
	std::string name = "Bro";
	double gpa = 3.75;
	char grades[] = { 'A', 'B', 'C', 'D', 'F' };
	std::string students[] = { "Bro", "Brah", "Bruh" };

	std::cout << sizeof(students) / sizeof(std::string) << " bytes" << '\n';


	std::cin.get();
}