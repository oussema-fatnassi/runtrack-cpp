#include "Terrestrial.hpp"
#include <iostream>

Terrestrial::Terrestrial(double speed) : walkSpeed(speed) {}

Terrestrial::~Terrestrial() {}

void Terrestrial::walk() const {
    std::cout << "   at " << walkSpeed << " m/s." << std::endl;
}
