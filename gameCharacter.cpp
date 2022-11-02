#include "gameCharacter.h"

gameCharacter ::gameCharacter(string n, int h, int a, int d)
{
    name = n;
    maxHealth = h;
    currentHealth = h;
    attack = a;
    defence = d;
}

int gameCharacter ::takeDamage(int amountOfDamage)
{
    int damage = amountOfDamage - defence;
    if (damage < 0)
    {
        damage = 0;
    }
    currentHealth -= damage;
    return damage;
}

bool gameCharacter::checkIsDead()
{
    return (currentHealth <= 0);
}