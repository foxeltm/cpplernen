#include <iostream>
#include <ctime>
#include <string>

int main()
{	    
    std::string name = "Dominik";
    int age = 14;
    std::string freePizzas[5] = { "pizza1", "pizza2","pizza3","pizza4","pizza5", };

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;
    
    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << freePizzas << '\n';

    std::cin.get();
}
