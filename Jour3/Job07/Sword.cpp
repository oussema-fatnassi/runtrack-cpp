#include "Sword.hpp"
#include <iostream>
using namespace std;

Sword::Sword(string name, int damage, int range) : Weapon("Sword", 1, 4) {}

Sword::~Sword(){}

void Sword::attack(Character &Character)
{
    cout << Character.getName() << " is attacked with a sword" << endl;
    Character.takeDamage(4);
}