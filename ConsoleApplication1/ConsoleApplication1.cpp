#include <iostream>
#include <ctime>
#include <string>


int main()
{	
    std::cout << "What burger do you want to get\n ";
    std::string Menu[] = { "hamburger", " cheeseburger", " burger" };
    std::string item;
    int answer;

    std::cout << "Here is the Menu \n";
    

    for (int i = 0; i < sizeof(Menu) / sizeof(Menu[0]); i++)
    {
        std::cout << Menu[i] << '\n';
    }
    

   
    std::cout << "enter the item tou want to get: ";
    std::cin >> item;

    if (item == "hamburger")
    {
        std::cout << "you need to pay 5$. \n";
    }
    else if (item == "cheeseburger")
    {
        std::cout << "you need to pay 3$. \n";
    }
    else if (item == "burger")
    {
        std::cout << "you need to pay 2$. \n";
    }
    else
    {
        std::cout << "Enter one of the options";
    }
    
    std::cin >> answer;

    switch (answer)
    {
        case 1 :
            if (answer == 5 )
            {
                std::cout << "here you go with your hamburger ";
            }
            else if (answer > 5 )
            {
                std::cout << "you gave to mutch ";
            }
            else if (answer < 5)
            {
                std::cout << "not enough money";
            }
            else 
            {
                std::cout << "invalid number";
            }
            break;

        case 2:
            if (answer == 3 )
            {
                std::cout << "here you go with your cheaseburger ";
            }
            else if (answer > 3 )
            {
                std::cout << "you gave to mutch ";
            }
            else if (answer < 3)
            {
                std::cout << "not enough money";
            }
            else
            {
                std::cout << "invalid number";
            }
            break;

        case 3:
            if (answer == 2 )
            {
                std::cout << "here you go with your burger ";
            }
            else if (answer > 2 )
            {
                std::cout << "you gave to mutch ";
            }
            else if (answer < 2 )
            {
                std::cout << "not enough money";
            }
            else
            {
                std::cout << "invalid number";
            }
            break;


    }






    std::cin.get();
}
