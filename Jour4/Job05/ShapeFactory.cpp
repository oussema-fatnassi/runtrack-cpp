#include "ShapeFactory.hpp"

Shape* ShapeFactory::createShape(const std::string& shapeType)
{
    if (shapeType == "Rectangle")
    {
        return new Rectangle();
    }
    else if (shapeType == "Circle")
    {
        return new Circle();
    }
    return nullptr;
}