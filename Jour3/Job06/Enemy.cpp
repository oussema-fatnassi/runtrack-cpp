#include "Enemy.hpp"
#include "Player.hpp"
#include <iostream>
#include <cmath>
using namespace std;

extern Player player; // Declare external player object

Enemy::Enemy(string name, int health, Vector2d position) : Character(name, health, position) {}

Enemy::~Enemy() {}

void Enemy::draw()
{
    cout << "Enemy " << getName() << " is drawn" << endl;
}

void Enemy::update()
{

    if (isAlive())
    {
        Vector2d playerPosition = player.getPosition();
        Vector2d enemyPosition = getPosition();

        double distance = abs(playerPosition.getX() - enemyPosition.getX()) +
                          abs(playerPosition.getY() - enemyPosition.getY());

        if (distance > 1)
        {
            if (playerPosition.getX() > enemyPosition.getX())
            {
                enemyPosition.setX(enemyPosition.getX() + 1);
            }
            else if (playerPosition.getX() < enemyPosition.getX())
            {
                enemyPosition.setX(enemyPosition.getX() - 1);
            }
            else if (playerPosition.getY() > enemyPosition.getY())
            {
                enemyPosition.setY(enemyPosition.getY() + 1);
            }
            else if (playerPosition.getY() < enemyPosition.getY())
            {
                enemyPosition.setY(enemyPosition.getY() - 1);
            }

            setPosition(enemyPosition);
            cout << "Enemy " << getName() << " moves closer to Player" << endl;
            
        }
        else
        {
            // Attack the player if in range
            player.takeDamage(3);
            cout << "Enemy " << getName() << " attacks Player" << endl;
            cout <<"Enemy has " << getHealth() << " health" << endl;
        }
    }
}
