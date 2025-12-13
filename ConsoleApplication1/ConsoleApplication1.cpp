#include <iostream>
#include <ctime>
#include <string>

int Multiply(int a, int b)
{
    return a * b;
}

void MultiplyAndLog(int a, int b)
{
    int result = Multiply(a, b);
    std::cout << result << std::endl;
}

int main() 
{
    MultiplyAndLog(6, 9);
    MultiplyAndLog(66, 99);
    MultiplyAndLog(60, 90);


    std::cin.get();
}