#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape {
    public:
        void draw() const override;
};

#endif // RECTANGLE_HPP