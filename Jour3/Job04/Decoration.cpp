#include "Decoration.hpp"
#include <iostream>
using namespace std;

Decoration::Decoration(){
    setX(x);
    setY(y);
}

Decoration::~Decoration(){}

void Decoration::draw()
{
    cout << "Decoration is drawn" << endl;
    cout << "Position: (" << getX() << ", " << getY() << ")" << endl;
}

void Decoration::update()
{   
    //decoration do not move
    setX(getX());
    setY(getY());
}