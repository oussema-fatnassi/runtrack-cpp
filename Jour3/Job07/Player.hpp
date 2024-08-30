#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include "Character.hpp"
#include <vector>
#include "Weapon.hpp"

class Player : public Character
{
private:
    Weapon* currentWeapon;
    std::vector<Weapon*> weapons;

public:

    Player(std::string name, int health, Vector2d position);
    ~Player();
    void draw() override;
    void update() override;              
    void switchWeapon();
    void addWeapon(Weapon* weapon);
    void attackEnemy(Character &enemy);  
};

extern Player player; // Declare external player object

#endif // PLAYER_HPP
