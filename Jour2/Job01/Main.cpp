#include "Penguin.hpp"
#include <iostream>

int main() {
    Penguin pingu(2.5, 1.0);

    pingu.talk();

    pingu.swim();
    pingu.walk();

    return 0;
}

// to test this code, run the following commands:
// ON MAC:
// clang++ -std=c++11  -o penguin Main.cpp Penguin.cpp Aquatic.cpp Terrestrial.cpp ./penguin
// ON WINDOWS:
// g++ -o penguin Main.cpp Penguin.cpp Aquatic.cpp Terrestrial.cpp
// ./penguin