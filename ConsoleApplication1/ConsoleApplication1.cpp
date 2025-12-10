#include <iostream>
#include <ctime>
#include <string>

template<typename T>
void Log(T value)
{
    std::cout << value << std::endl;
}

template<typename L, typename U>
auto max(L x, U y)
{
    return (x > y) ? x : y;
}

int main()
{	    
    Log(max(1.6969, 2));

    std::cin.get();
}



