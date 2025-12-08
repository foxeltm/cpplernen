#include <iostream>
#include <ctime>
#include <string>

void swap(int &x, int &y);

int main()
{	
    int x = 2;
    int y = 3;

    swap(x, y);

    std::cout << x << '\n';
    std::cout << y << '\n';


    std::cin.get();
}
void swap(int &x, int &y)
{
    int temp = 0;

    temp = x;
    x = y;
    y = temp;
}