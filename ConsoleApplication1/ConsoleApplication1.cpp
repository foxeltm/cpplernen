#include <iostream>
#include <ctime>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity() : m_Name("Unknown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const { return m_Name; }
};

int main() 
{

    Entity* e;
    {
        Entity* entity = new Entity("TheoLord");
        e = entity;
        std::cout << entity->GetName() << std::endl;
    }

    std::cin.get();
    delete e;
}
