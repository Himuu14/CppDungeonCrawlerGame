#include "Room.h"

Room::Room(int p, bool iex, vector<item> i, vector<gameCharacter> gc)
{
    pos = p;
    isExist = iex;
    Items = i;
    enemies = gc;
}

void Room::clearLoot()
{
    Items.clear();
}
void Room ::clearEnimes()
{
    enemies.clear();
}