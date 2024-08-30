#include "Bow.hpp"
#include <iostream>
using namespace std;

Bow::Bow(string name, int damage, int range) : Weapon("Bow", 1, 4) {}

Bow::~Bow(){}

void Bow::attack(Character &Character)
{
    cout << Character.getName() << " is attacked with a bow" << endl;
    Character.takeDamage(1);
}