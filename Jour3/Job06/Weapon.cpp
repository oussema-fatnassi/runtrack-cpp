#include "Weapon.hpp"
#include <iostream>
using namespace std;

Weapon::Weapon(string name, int damage, double range)
{
    this->name = name;
    this->damage = damage;
    this->range = range;
}

string Weapon::getName() const
{
    return name;
}

double Weapon::getRange() const
{
    return range;
}

int Weapon::getDamage() const
{
    return damage;
}

Weapon::~Weapon(){}