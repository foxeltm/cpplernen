#include <iostream>
#include <ctime>

int MyNum = 5;

void printNum();

int main()
{

    int MyNum = 3;

    printNum();
    std::cout << ::MyNum << std::endl;
    

    std::cin.get();
}
void printNum() 
{
    int MyNum = 2;

    std::cout << ::MyNum << std::endl;
}