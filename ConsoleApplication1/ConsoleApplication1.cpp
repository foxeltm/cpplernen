#include <iostream>
#include <vector>
#include <string>

class Entity
{
public:
    float X, Y;


    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }
    
    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
    }

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

int main() 
{
    Entity e(10.0, 5.0);
    e.Print();

    std::cin.get();
}
