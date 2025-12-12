#include <iostream>
#include <ctime>
#include <string>

enum Day{sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main() 
{
    Day today = friday;

    switch (Day)
    {
    case sunday:    std::cout << "It is Sunday!\n";
        break;
    case monday:    std::cout << "It is Monday!\n";
        break;
    case tuesday:   std::cout << "It is Tuesday!\n";
        break;
    case wednesday: std::cout << "It is Wednesday!\n";
        break;
    case thursday:  std::cout << "It is Thursday!\n";
        break;
    case friday:    std::cout << "It is Friday!\n";
        break;
    case saturday:  std::cout << "It is Saturday!\n";
        break;
    }

    std::cin.get();
}


