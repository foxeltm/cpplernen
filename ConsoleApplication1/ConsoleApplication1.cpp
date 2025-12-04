#include <iostream>
#include <string>

std::string concatStrings(std::string string1, std::string string2);

int main()
{
    bool play = true;

    while (play)
    {
        std::string firstname;
        std::string lastname;

        std::cout << "gib deinen vornamen ein: ";
        std::cin >> firstname;

        std::cout << "gib deinen nachnamen ein: ";
        std::cin >> lastname;

        std::string fullname = concatStrings(firstname, lastname);

        std::cout << "Hello, " << fullname << "!" << std::endl;
        std::cout << "Moechtest du es nochmal versuchen? (j/n): ";

        char response;
        std::cin >> response;  // besser!

        if (response == 'n' || response == 'N')
            play = false;
        else if (response == 'j' || response == 'J')
            play = true;
        else
        {
            std::cout << "ungueltige eingabe, das programm wird beendet." << std::endl;
            play = false;
        }
    }
}

std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}