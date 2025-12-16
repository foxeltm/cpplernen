#include <iostream>
#include <ctime>
#include <string>

class Item
{
public:
    std::string itemname;
    std::string discriptions;
    int cost;
    float dmg;
    
    void Use(std::string name)
    {
        std::cout << name <<" is beeing used " << std::endl;
    }    

    Item()
    {
        itemname = "Unknown";
        discriptions = "This is a Item";
        cost = 0;
        dmg = 1.2f;
    }

    void print()
    {
        std::cout << "Itemname: " << itemname << '\n'
                  << "Description: " << discriptions << '\n'
                  << "Cost: " << cost << '\n'
                  << "Damage: " << dmg << '\n';
    }
};

int main() 
{
    std::string name;
    std::cout << "Enter the item: ";
    std::cin >> name;

    Item item;
    item.dmg = 23.3f;
    item.cost = 23;
    item.Use(name);
    item.itemname = name;
    item.print();

    std::cin.get();
}
