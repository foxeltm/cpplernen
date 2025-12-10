#include <iostream>
#include <ctime>
#include <string>

template<typename T>
void Log (T value)
{
    std::cout << value << std::endl;
}

int main()
{	    
    char* pGrades = NULL;
    int size;

    Log("How many grades to enter in? ");
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter gerade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    std::cin.get();
}
