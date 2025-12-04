#include <iostream>
#include <string>

void bakePizza();
void bakePizza(std::string topping1);

int main()
{
	bakePizza();
	bakePizza("salami, schinken, mais ");

    std::cin.get();
}

void bakePizza() 
{
    std::cout << "Herer is your pizza\n";
}
void bakePizza(std::string topping1)
{
    std::cout << "Herer is your " << topping1 << "pizza\n";
}
void bakePizza(std::string topping1, std::string topping2)
{
    std::cout << "Herer is your " << topping1 << topping2 << "pizza\n";
}
void bakePizza(std::string topping1, std::string topping2, std::string topping3)
{
    std::cout << "Herer is your " << topping1 << topping2 << topping3 << "pizza\n";
}