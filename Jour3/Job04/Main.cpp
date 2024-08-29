#include "Vector2d.hpp"
#include "Character.hpp"
#include "Decoration.hpp"
#include "Bow.hpp"
#include "Spear.hpp"
#include "Sword.hpp"
#include <iostream>
using namespace std;

int main() {

    Bow b("Bow", 1, 4);
    Spear s("Spear", 2, 2);
    Sword sw("Sword", 3, 1);

    Character c("John", 100);
    b.attack(c);
    s.attack(c);
    sw.attack(c);
    c.draw();
    // c.takeDamage(50);
    c.update();
    cout<<"Health: "<<c.getHealth()<<endl;
    c.takeDamage(100);
    c.update();

    return 0;
}