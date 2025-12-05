#include <iostream>
#include <ctime>

double getTotal(double prices[], int size);

int main()
{
	double prices[] = { 19.99, 29.99, 4.99, 99.99, 149.99 };
	int size = sizeof(prices) / sizeof(prices[0]);
	double total = getTotal(prices, size);

	std::cout << "$" << total << '\n';

	std::cin.get();
}

double getTotal(double prices[], int size)
{
	double total = 0;

	for (int i = 0; i < size; i++)
	{
		total += prices[i];
	}
	return total;
}