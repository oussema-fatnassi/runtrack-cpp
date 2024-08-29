#include "Player.hpp"
#include <iostream>
#include <cmath>
using namespace std;

Player::Player(string name, int health, Vector2d position) : Character(name, health, position), currentWeapon(nullptr) {}

Player::~Player()
{
    for (Weapon* weapon : weapons)
    {
        delete weapon;
    }
}

void Player::draw()
{
    cout << "Player " << getName() << " is drawn" << endl;
}

void Player::update()
{
    if (isAlive())
    {
        cout << "Player " << getName() << " is alive and has " << getHealth() << " health" << endl;
    }
    else
    {
        cout << "Player " << getName() << " is dead" << endl;
    }

    switchWeapon();
}

void Player::attackEnemy(Character &enemy)
{
    if (isAlive())
    {
        Vector2d enemyPosition = enemy.getPosition();
        Vector2d playerPosition = getPosition();

        // Calculate distance to the enemy
        double distance = sqrt(pow(enemyPosition.getX() - playerPosition.getX(), 2) +
                               pow(enemyPosition.getY() - playerPosition.getY(), 2));

        if (currentWeapon && distance <= currentWeapon->getRange())
        {
            currentWeapon->attack(enemy);
            cout << "Player " << getName() << " attacks Enemy with " << currentWeapon->getName() << endl;
            enemy.takeDamage(currentWeapon->getDamage());
        }
        else
        {
            cout << "Enemy is out of range for " << currentWeapon->getName() << endl;
        }
    }
}

void Player::switchWeapon()
{
    if (weapons.empty()) return;

    auto it = std::find(weapons.begin(), weapons.end(), currentWeapon);
    if (it != weapons.end() && ++it != weapons.end())
    {
        currentWeapon = *it;
    }
    else
    {
        currentWeapon = weapons.front();
    }

    cout << "Switched to " << currentWeapon->getName() << endl;
}

void Player::addWeapon(Weapon* weapon)
{
    weapons.push_back(weapon);
    if (!currentWeapon)
    {
        currentWeapon = weapon; 
    }
}
