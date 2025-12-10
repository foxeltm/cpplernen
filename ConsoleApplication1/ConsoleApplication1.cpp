#include <iostream>
#include <ctime>
#include <string>

int factorial(int num);

template<typename T>
void Log (T value)
{
    std::cout << value << std::endl;
}

int main()
{	    
    Log(factorial(10));


    std::cin.get();
}

int factorial(int num)
{
    if(num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}

