#include "Penguin.hpp"
#include <iostream>

Penguin::Penguin(double swimSpeed, double walkSpeed)
    : Aquatic(swimSpeed), Terrestrial(walkSpeed), slideSpeed(0.0) {}

Penguin::Penguin(double swimSpeed, double walkSpeed, double slideSpeed)
    : Aquatic(swimSpeed), Terrestrial(walkSpeed), slideSpeed(slideSpeed) {}

Penguin::Penguin(const Penguin& other)
    : Aquatic(other.swimSpeed), Terrestrial(other.walkSpeed), slideSpeed(other.slideSpeed) {}

shared_ptr<vector<Penguin> > Penguin::Penguins = make_shared<vector<Penguin> >();

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

void Penguin::slide() const {
    std::cout << "Penguin sliding at " << slideSpeed << " m/s." << std::endl;
}

void Penguin::addPenguin(shared_ptr<Penguin> penguin) {
    Penguins->push_back(*penguin);
}

void Penguin::removePenguin(shared_ptr<Penguin> penguin) {
    Penguins->erase(Penguins->begin());
    cout << "Penguin removed" << endl;
}

void Penguin::setSwimSpeed(double speed) {
    swimSpeed = speed;
}

void Penguin::setWalkSpeed(double speed) {
    walkSpeed = speed;
}

void Penguin::setSlideSpeed(double speed) {
    slideSpeed = speed;
}