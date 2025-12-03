#include <iostream>
#include <ctime>

std::string concatStrings(std::string sting1, std::string string2);

int main()
{	
	std::string firstname = "raffael";
	std::string lastname = "fuchs";
	std::string fullname = concatStrings(firstname, lastname);

	std::cout << "Hello, " << fullname << "!" << std::endl;
	

	std::cin.get();
}
std::string concatStrings(std::string sting1, std::string string2) 
{
	return sting1 + " " + string2;
}