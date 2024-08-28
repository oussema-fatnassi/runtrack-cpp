#include "Penguin.hpp"
#include <iostream>

int main() {

    shared_ptr<Penguin> p1 = make_shared<Penguin>("Alpha", 2.0, 1.0, 2.0);
    shared_ptr<Penguin> p2 = make_shared<Penguin>("Beta", 3.0, 2.0, 3.0);
    shared_ptr<Penguin> p3 = make_shared<Penguin>("Gamma", 4.0, 3.0, 4.0);
    shared_ptr<Penguin> p4 = make_shared<Penguin>("Delta", 5.0, 4.0, 5.0);

    p1->addPenguin(p1);
    p1->addPenguin(p2);
    p1->addPenguin(p3);
    p1->addPenguin(p4);

    Penguin::showTravelTime();

    return 0;
}

// to test this code, run the following commands:
// ON MAC:
// clang++ -std=c++11  -o penguin Main.cpp Penguin.cpp Aquatic.cpp Terrestrial.cpp ./penguin
// ON WINDOWS:
// g++ -o penguin Main.cpp Penguin.cpp Aquatic.cpp Terrestrial.cpp
// ./penguin