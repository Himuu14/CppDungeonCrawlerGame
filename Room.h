#include <vector>
#include "item.h"
#include "gameCharacter.h"
#ifndef ROOM_H
#define ROOM_H
using namespace std;

class Room
{
    int pos;
    bool isExist;
    vector<item> Items;
    vector<gameCharacter> enemies;
    Room(int, bool, vector<item>, vector<gameCharacter>);
    void clearLoot();
    void clearEnimes();
};

#endif