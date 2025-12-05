#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoices(char choice);
void choseWinner(char player, char computer);

int main()
{
	bool playAgain = true;

	std::cout << "Welcome to Rock, Paper, Scissors!" << '\n';

	while (playAgain)
	{
		char player;
		char computer;

		player = getUserChoice();
		std::cout << "Player choice: ";
		showChoices(player);

		computer = getComputerChoice();
		std::cout << "Computer choice: ";
		showChoices(computer);

		choseWinner(player, computer);

		std::cout << "Do you want to play again? (1 = yes, 0 = no): ";
		char answer;
		std::cin >> answer;

		if (answer == '0') 
		{
			playAgain = false;
		}
		else if(answer == '1')
		{
			playAgain = true;
		}
		else
		{
			std::cout << "Invalid input. Exiting the game." << '\n';
			playAgain = false;
		}
	}
}

char getUserChoice()
{

	char player;

	do {
		std::cout << "Enter your choice (R, P, S): ";
		std::cin >> player;
	} while (player != 'r' && player != 'p' && player != 's');

	return player;
}

char getComputerChoice()
{
	srand(time(0));
	int num = rand() % 3 + 1;

	switch (num) {
		case 1:
			return 'r';
		case 2: 
			return 'p';
		case 3:
			return 's';	
	}


	return 0;
}

void showChoices(char choice)
{
	switch (choice)
	{
		case 'r':
			std::cout << " Rock" << '\n';
			break;
		case 'p':
			std::cout << " Paper" << '\n';
			break;
		case 's':
			std::cout << " Scissors" << '\n';
			break;
	}
}

void choseWinner(char player, char computer)
{
	switch (player)
	{
		case 'r':   if (computer == 'r')
					{
						std::cout << "It's a tie!" << '\n';	
					}
					else if (computer == 'p')
					{
						std::cout << "Computer wins!" << '\n';	
					}
					else if (computer == 's')
					{
						std::cout << "Player wins!" << '\n';	
					}

				break;
		case 'p':   if (computer == 'r')
					{
						std::cout << "Player wins!" << '\n';	
					}
					else if (computer == 'p')
					{
						std::cout << "It's a tie!" << '\n';	
					}
					else if (computer == 's')
					{
						std::cout << "Computer wins!" << '\n';	
					}
				break;

		case 's':   if (computer == 'r')
					{
						std::cout << "Computer wins!" << '\n';	
					}
					else if (computer == 'p')
					{
						std::cout << "Player wins!" << '\n';	
					}
					else if (computer == 's')
					{
						std::cout << "It's a tie!" << '\n';	
					}
				break;

	}
}