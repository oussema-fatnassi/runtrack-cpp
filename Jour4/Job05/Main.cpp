#include "ShapeFactory.hpp"

int main()
{
    Shape* rectangle = ShapeFactory::createShape("Rectangle");
    if(rectangle != nullptr)
    {
        rectangle->draw();
    }
    Shape* circle = ShapeFactory::createShape("Circle");
    if(circle != nullptr)
    {
        circle->draw();
    }
    Shape* none = ShapeFactory::createShape("None");
    if(none != nullptr)
    {
        none->draw();
    }
    return 0;
}