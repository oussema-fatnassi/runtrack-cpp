#include "Character.hpp"
#include <iostream>
using namespace std;

Character::Character(string name, int health)
{
    this->name = name;
    this->health = health;
}

Character::~Character(){}

void Character::draw()
{
    cout << "Character " << name << " is drawn" << endl;
}

void Character::update()
{
    cout << "Character " << name << " is updated" << endl;
    isAlive() ? cout << "Character " << name << " is alive" << endl : cout << "Character " << name << " is dead" << endl;
}

bool Character::isAlive() const
{
    return health > 0;
}

void Character::takeDamage(int damage)
{
    cout << "Character " << name << " takes " << damage << " damage" << endl;
    health -= damage;
}

double Character::getHealth() const
{
    return health;
}

string Character::getName() const
{
    return name;
}