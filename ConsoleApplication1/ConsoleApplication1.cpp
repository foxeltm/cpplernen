#include <iostream>

int main()
{	
	std::string name;

	std::cout << "Enter your name: ";
	std::cin >> name;

	//if (name.length() > 12) 
	//{
	//	std::cout << "Your name is too long!" << std::endl;
	//}
	//else 
	//{
	//	std::cout << "Hello, " << name << "!" << std::endl;
	//}
	
	//if (name.empty()) 
	//{
		//std::cout << "You didn't enter a name!" << std::endl;
	//}
	//else 
	//{
		//std::cout << "Hello, " << name << "!" << std::endl;
	//}

	//name.clear();

	//std::cout << "Hello " << name << "!" << std::endl;

	//name.append("@gmail.com");

	//std::cout << "Your username is now: " << name << std::endl;

	//std::cout << name.at(0);

	//name.insert(0, "@");
	//std::cout << "Your username is now: " << name << std::endl;

	//std::cout << name.find(' ');

	name.erase(0, 3);
	std::cout << name;

	std::cin.get();
}