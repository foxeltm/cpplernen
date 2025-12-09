#include <iostream>
#include <ctime>
#include <string>

int main()
{	    
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;


    if (pointer == nullptr)
    {
        std::cout << "address was not assigned\n";
    }
    else
    {
        std::cout << "address was assigned\n";
        std::cout << *pointer;
    }


    std::cin.get();
}
