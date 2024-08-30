#include "DrawShape.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"

int main()
{
    Rectangle rectangle;
    Circle circle;

    drawShape(rectangle);
    drawShape(circle);

    return 0;
}