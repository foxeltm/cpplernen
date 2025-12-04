#include <iostream>
#include <ctime>

enum BankOptions
{
	SHOW_BALANCE = 1,
	DEPOSIT,
	WITHDRAW,
	EXIT
};

void showBalance(double balance);
double deposit();
double withdraw(double &balance);

int main()
{

	double balance = 0.0;
	bool running = true;
	int userInput;


	std::cout << "Willkommen bei einem simplem Bank System\n";


	showBalance(balance);
	
	while (running)
	{
		std::cout << "Bitte waehlen Sie eine Option:\n";
		std::cout << "1. Guthaben anzeigen\n";
		std::cout << "2. Einzahlen\n";
		std::cout << "3. Abheben\n";
		std::cout << "4. Beenden\n";

		std::cin >> userInput;
		

		switch (userInput)
		{
			case 1: SHOW_BALANCE:
				showBalance(balance);
				break;
			case 2: DEPOSIT:
				balance += deposit();
				showBalance(balance);
				break;
			case 3: WITHDRAW:
				balance -= withdraw(balance);
				showBalance(balance);
				break;
			case 4: EXIT:
				std::cout << "Danke fuer die Nutzung unseres Bank Systems. Auf Wiedersehen!\n";
				running = false;
				break;
			default:std::cout <<"Ungueltige Option. Bitte versuchen Sie es erneut.\n";
				break;

		}

	}

	

    std::cin.get();
}
void showBalance(double balance)
{
	std::cout << "Deine momentanes Guthaben in $ bertaegt" << balance << '\n';
}

double deposit()
{	
	std::cout << "deposit called\n";

	double amount;
	std::cout << "Geben Sie den Einzahlungsbetrag in $ ein: ";
	std::cin >> amount;

	if (amount > 0)
	{
		return amount;
	}
	else 
	{
		std::cout << "Ungueltiger Betrag. Bitte versuchen Sie es erneut.\n";
		
	}

}

double withdraw(double &balance)
{
	double amount;
	
	std::cout << "Geben Sie den Abhebungsbetrag in $ ein: ";
	std::cin >> amount;


	if (amount > balance)
	{
		std::cout << "du hast kein geld du armutskind\n";
	}
	else if (amount < 0)
	{
		std::cout << "ungueltiger betrag. bitte versuchen sie es erneut.\n";
	}
	else
	{
		balance -= amount;
		std::cout << "Sie haben erfolgreich $" << amount << " abgehoben.\n";
	}
	return amount;
}
