#include "Spear.hpp"
#include <iostream>
using namespace std;

Spear::Spear(string name, int damage, int range) : Weapon("Spear", 2, 2) {}

Spear::~Spear(){}

void Spear::attack(Character &Character)
{
    cout << Character.getName() << " is attacked with a spear" << endl;
    Character.takeDamage(2);
}