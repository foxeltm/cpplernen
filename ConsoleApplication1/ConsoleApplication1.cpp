#include <iostream>
#include <ctime>
#include <string>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define LILA "\033[35m"
#define CYAN "\033[36m"


int main() 
{
    std::cout << RED << "Hallo ich bin rot" << RESET << '\n';
    std::cout << YELLOW << "Hallo ich bin gelb" << RESET << '\n';
    std::cout << GREEN << "Hallo ich bin gruen" << RESET << '\n';
    std::cout << BLUE << "Hallo ich bin blau" << RESET << '\n';
    std::cout << CYAN << "Hallo ich bin cyan" << RESET << '\n';
    std::cout << LILA << "Hallo ich bin lila" << RESET << '\n';

    std::cin.get();
}