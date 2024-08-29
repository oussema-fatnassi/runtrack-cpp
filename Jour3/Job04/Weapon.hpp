#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include "Character.hpp"
using namespace std;

class  Weapon
{
    private:
        string name;
        int damage;
        int range;
        
    public:
        Weapon(string name, int damage, int range);
        ~ Weapon();
        virtual void attack(Character &Character) = 0;
};

#endif // WEAPON_HPP