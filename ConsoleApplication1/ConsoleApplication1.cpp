#include <iostream>
#include <ctime>
#include <string>

void printInfo(const std::string &name, const int &age);

int main()
{	
    std::string name = "Raffel";
    int age = 14;

    printInfo(name, age);


    std::cin.get();
}
void printInfo(const std::string &name,const int &age)
{
    std::cout << name << '\n';
    std::cout << age << '\n';
}