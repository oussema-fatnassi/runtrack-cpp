#ifndef SPEAR_HPP
#define SPEAR_HPP

#include <string>
#include "Weapon.hpp"
#include "Character.hpp"

class Spear : public Weapon
{
    public:
        Spear(string name, int damage, int range);
        ~Spear();
        void attack(Character &Character) override;

};

#endif // SPEAR_HPP