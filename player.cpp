#include "Player.h";

Player ::Player(string n, int h, int a, int d) : gameCharacter(n, h, a, d)
{
    item dagger = item("Dagger", 0, 5, 0);
    addItem(dagger);
}
void Player::addItem(Item item)
{
    Inventory.push_back(item);
}

void addItem(item);
void increasedStats(int, int, int);
void lootRoom(Room *);
void ChangeRoom(Room *);
