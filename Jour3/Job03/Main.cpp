#include "Vector2d.hpp"
#include "Character.hpp"
#include "Decoration.hpp"
#include <iostream>
using namespace std;

int main() {
    Vector2d v1(1, 2);
    Vector2d v2(3, 4);
    Vector2d v3 = v1 + v2;
    Vector2d v4 = v1 - v2;
    double d = v1.distance(v2);

    cout<<"v1: ("<<v1.getX()<<", "<<v1.getY()<<")"<<endl;
    cout<<"v2: ("<<v2.getX()<<", "<<v2.getY()<<")"<<endl;
    cout<<"v3: ("<<v3.getX()<<", "<<v3.getY()<<")"<<endl;
    cout<<"v4: ("<<v4.getX()<<", "<<v4.getY()<<")"<<endl;
    cout<<"d: "<<d<<endl;

    Character c("John", 100);
    c.draw();
    c.takeDamage(50);
    c.update();
    cout<<"Health: "<<c.getHealth()<<endl;
    c.takeDamage(100);
    c.update();

    

    return 0;
}