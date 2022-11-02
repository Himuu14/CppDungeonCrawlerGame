#include <string>
using namespace std;

#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H

class gameCharacter
{
public:
    string name;
    int maxHealth, currentHealth, attack, defence;
    gameCharacter(string, int, int, int);

    int takeDamage(int);
    bool checkIsDead();
};
#endif