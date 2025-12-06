#include <iostream>
#include <ctime>
#include <string>


int main()
{	
    std::string cars[][3] = { {"mustang", "escape", "f-150"},
                            {"corvette", "equinnox", "silverado"},
                            {"callenger", "durango", "Ram 1500"} };

    int rows = sizeof(cars) / sizeof(cars[0]);
    int colums = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    std::cin.get();
}
