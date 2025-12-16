#include <iostream>
#include <ctime>
#include <string>

#define LOG(x) std::cout << x << std::endl;

int main() 
{

    char* buffer = new char[8];
    memset(buffer, 0, 8);

    char** ptr = &buffer;

    delete[] buffer;
    //int var = 8;
    //int* ptr = &var;
    //*ptr = 10;
    //LOG(var);
    std::cin.get();
}
