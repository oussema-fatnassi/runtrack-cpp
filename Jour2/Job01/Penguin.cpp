#include "Penguin.hpp"
#include <iostream>

Penguin::Penguin(double swimSpeed, double walkSpeed)
    : Aquatic(swimSpeed), Terrestrial(walkSpeed) {}

Penguin::~Penguin() {}

void Penguin::talk() const {
    std::cout << "Hi, I'm a penguin!" << std::endl;
}

void Penguin::swim() const {
    std::cout << "Penguin swimming at " << swimSpeed << " m/s." << std::endl;
}

void Penguin::walk() const {
    std::cout << "Penguin walking at " << walkSpeed << " m/s." << std::endl;
}
