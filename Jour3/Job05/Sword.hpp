#ifndef SWOR_HPP
#define SWOR_HPP

#include <string>
#include "Weapon.hpp"
#include "Character.hpp"

class Sword : public Weapon
{
    public:
        Sword(string name, int damage, int range);
        ~Sword();
        void attack(Character &Character) override;

};

#endif // SWOR_HPP