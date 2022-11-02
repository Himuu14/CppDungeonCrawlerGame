#include "Room.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player : public gameCharacter
{
public:
    Room *currentRoom;
    Room *PreviousRoom;
    vector<item> Invantory;
    Player(string, int, int, int);
    void addItem(item);
    void increasedStats(int, int, int);
    void lootRoom(Room *);
    void ChangeRoom(Room *);
};

#endif