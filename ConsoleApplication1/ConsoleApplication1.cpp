#include <iostream>
#include <ctime>

void happyBirthday(std::string name, int age);

int main()
{	
	std::string name = "Raffael";
	int age = 14;


	happyBirthday(name, age);
	

	std::cin.get();
}
void happyBirthday(std::string name, int age)
{
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "Happy Birthday Dear" << name << '\n';
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "You are now " << age << " years old!" << '\n';
}