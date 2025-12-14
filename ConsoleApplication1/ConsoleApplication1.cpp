#include <iostream>
#include <ctime>
#include <string>

void Farben();

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define LILA "\033[35m"
#define CYAN "\033[36m"

int main() 
{
    Farben();

    std::cin.get();
}
void Farben()
{
    std::string farben[] = { RED, GREEN, YELLOW, BLUE, LILA, CYAN };
    int size = sizeof(farben) / sizeof(farben[0]);

    srand(time(nullptr));

    for (int i = 0; i < size; i++)
    {
        std::cout << farben[i] << "Hallo ich bin in einer coolen farbe" << RESET << std::endl;
    }
}