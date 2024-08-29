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
    void update() override;              // Keep the update method without parameters
    void switchWeapon();
    void addWeapon(Weapon* weapon);
    void attackEnemy(Character &enemy);  // New method to handle enemy interaction
};

#endif // PLAYER_HPP
