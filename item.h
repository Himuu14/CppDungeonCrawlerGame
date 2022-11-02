#include <string>
using namespace std;

#ifndef ITEM_H
#define ITEM_H

class item
{
public:
    string name;
    int health, attack, defence;
    item(string, int, int, int);
};

#endif
