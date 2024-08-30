#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
    public:
        void draw() const override;
};

#endif // CIRCLE_HPP