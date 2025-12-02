#include <iostream>
#include <ctime>

int main()
{	
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;

    bool playing = true;

    srand(time(0)); 

    while (playing)
    {
        int num = 0;
        int guess = 0;
        int tries = 0;

        num = (rand() % 100) + 1;

        do
        {
            std::cout << "Enter your guess (1-100): ";
            std::cin >> guess;
            tries++;

            if (guess > num)
            {
                std::cout << "Too high! Try again." << std::endl;
            }
            else if (guess < num)
            {
                std::cout << "Too low! Try again." << std::endl;
            }
            else
            {
                std::cout << "Congratulations! You've guessed the number "
                    << num << " in " << tries << " tries." << std::endl;
            }

        } while (guess != num);

        std::cout << "Do you want to play again? (y/n): ";
        char response;
        std::cin >> response;

        if (response != 'y' && response != 'Y')
        {
            playing = false;
        }
    }

	std::cin.get();
}