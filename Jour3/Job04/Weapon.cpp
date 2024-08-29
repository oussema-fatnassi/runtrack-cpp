#include "Weapon.hpp"
#include <iostream>
using namespace std;

Weapon::Weapon(string name, int damage, int range)
{
    this->name = name;
    this->damage = damage;
    this->range = range;
}

Weapon::~Weapon(){}