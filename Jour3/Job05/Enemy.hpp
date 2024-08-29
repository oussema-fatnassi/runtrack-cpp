#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include "Character.hpp"

class Enemy : public Character
{
    public:
        Enemy(string name, int health, Vector2d position);
        ~Enemy();
        void draw() override;
        void update() override;
};

#endif // ENEMY_HPP