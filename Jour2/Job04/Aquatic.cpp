#include "Aquatic.hpp"
#include <iostream>

Aquatic::Aquatic(double speed) : swimSpeed(speed) {}

Aquatic::~Aquatic() {}

void Aquatic::swim() const {
    std::cout << "Swimming at " << swimSpeed << " m/s." << std::endl;
}
