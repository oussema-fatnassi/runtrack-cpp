#ifndef SHAPEFACTORY_HPP
#define SHAPEFACTORY_HPP

#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"
#include <string>

class ShapeFactory {
    public:
        static Shape* createShape(const std::string& shapeType);
};

#endif // SHAPEFACTORY_HPP
