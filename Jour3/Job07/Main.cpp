#include "Vector2d.hpp"
#include "Character.hpp"
#include "Decoration.hpp"
#include "Bow.hpp"
#include "Spear.hpp"
#include "Sword.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Container.hpp"
#include <iostream>

using namespace std;
Player player("Player", 100, Vector2d(0, 0));

int main()
{
    Enemy enemy("Enemy", 20, Vector2d(8, 5));
    Enemy enemy1("Enemy1", 20, Vector2d(5, 5));

    Bow* bow = new Bow("Bow", 1, 4);
    Spear* spear = new Spear("Spear", 2, 2);
    Sword* sword = new Sword("Sword", 4, 1);

    player.addWeapon(bow);
    player.addWeapon(spear);
    player.addWeapon(sword);

    Container container;
    container.add(std::make_shared<Player>(player));
    container.add(std::make_shared<Enemy>(enemy));
    container.add(std::make_shared<Enemy>(enemy1));

    container.update();
    container.draw();

    while (player.isAlive()) {
        for (auto& obj : container.getObjects()) {
            if (auto enemyPtr = std::dynamic_pointer_cast<Enemy>(obj)) {
                player.attackEnemy(*enemyPtr);
                if (!enemyPtr->isAlive()) {
                    cout << enemyPtr->getName() << " defeated!" << endl;
                    enemyPtr->~Enemy();
                } else {
                    enemyPtr->update();
                }
            }
        }

        player.update();

        bool allEnemiesDefeated = true;
        for (auto& obj : container.getObjects()) {
            if (auto enemyPtr = std::dynamic_pointer_cast<Enemy>(obj)) {
                if (enemyPtr->isAlive()) {
                    allEnemiesDefeated = false;
                    break;
                }
            }
        }

        if (allEnemiesDefeated) {
            cout << "Player wins!" << endl;
            break;
        }
    }

    if (!player.isAlive()) {
        cout << "Player defeated!" << endl;
    }

    return 0;
}
