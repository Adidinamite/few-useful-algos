#include <iostream>
#include <set>
using namespace std;

    class Player
{
    public:
        int x, y; // position
        int speed; // speed
    void Move(int xa, int ya)
{
    x += xa * speed;
    y += ya * speed;
}
};

/*void Move(Player& player, int xa, int ya)
{
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}*/
//Pot adauaga aceasta functie direct in clasa, numindu-se METODA fara sa mai fie nevoie de parametrul Player player
int main()
{
    Player player;
    player.x = 5;
    player.speed = 2;
    player.Move(1, -1);
    cout<< player.x;
    return 0;
}
