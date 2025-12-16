#include <iostream>
#include <ctime>
#include <string>

class Player
{
    int x, y;
    float speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        x += xa * speed;
    }
};

struct Vec2
{
    float x, y;

    void Add(const Vec2& other)
    {
        x += other.x;
        y += other.y;
    }
};

int main() 
{
    Player player;
    player.Move(1, -1);

    std::cin.get();
}
