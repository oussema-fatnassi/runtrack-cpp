#ifndef BOW_HPP
#define BOW_HPP

#include <string>
#include "Weapon.hpp"
#include "Character.hpp"

class Bow : public Weapon
{
    public:
        Bow(string name, int damage, int range);
        ~Bow();
        void attack(Character &Character) override;

};

#endif // BOW_HPP