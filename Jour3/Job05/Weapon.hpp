#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include "Character.hpp"
using namespace std;

class Weapon
{
private:
    string name;
    int damage;
    double range;

public:
    Weapon(string name, int damage, double range);
    virtual ~Weapon();
    virtual void attack(Character &Character) = 0;
    string getName() const;
    double getRange() const;
    int getDamage() const;


};

#endif // WEAPON_HPP
