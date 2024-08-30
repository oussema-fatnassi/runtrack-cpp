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
Enemy enemy("Enemy", 100, Vector2d(5, 5));
Container container;

int main()
{
    Bow* bow = new Bow("Bow", 1, 4);
    Spear* spear = new Spear("Spear", 2, 2);
    Sword* sword = new Sword("Sword", 4, 1);

    player.addWeapon(bow);
    player.addWeapon(spear);
    player.addWeapon(sword);

    container.add(std::make_shared<Player>(player));
    container.add(std::make_shared<Enemy>(enemy));
    
    container.update();
    container.draw();

    while (player.isAlive() && enemy.isAlive())
    {
        player.update();            
        player.attackEnemy(enemy);   
        enemy.update();              
    }

    if(player.isAlive())
    {
        cout << "Player wins" << endl;
    }
    else
    {
        cout << "Enemy wins" << endl;
    }

    return 0;
}
