#include "Vector2d.hpp"
#include <cmath>
using namespace std;

Vector2d::Vector2d(double x, double y) {
    this->x = x;
    this->y = y;
}

Vector2d::~Vector2d(){}

void Vector2d::setX(double x) {
    this->x = x;
}

void Vector2d::setY(double y) {
    this->y = y;
}

double Vector2d::getX() const {
    return x;
}

double Vector2d::getY() const {
    return y;
}

double Vector2d::distance(Vector2d const& other) const {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}

Vector2d Vector2d::operator+(Vector2d const& other) const {
    return Vector2d(x + other.x, y + other.y);
}

Vector2d Vector2d::operator-(Vector2d const& other) const {
    return Vector2d(x - other.x, y - other.y);
}

Vector2d::Vector2d() : x(0), y(0) {
}
