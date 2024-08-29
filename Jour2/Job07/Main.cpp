#include "Penguin.hpp"
#include <iostream>

int main() {
    Penguin penguin("Alpha", 2.0, 1.0, 3.0);
    penguin.addCompetence("swimming", 5);
    penguin.addCompetence("walking", 3);
    penguin.addCompetence("sliding", 4);
    cout << "Penguin competences:" << endl;
    penguin.showCompetences();
    cout << "Modifying swimming competence to 4" << endl;
    penguin.modifyCompetence("swimming", 4);
    penguin.showCompetences();
    cout << "Removing walking competence" << endl;
    penguin.removeCompetence("walking");
    penguin.showCompetences();

    return 0;
}

// to test this code, run the following commands:
// ON MAC:
// clang++ -std=c++11  -o penguin Main.cpp Penguin.cpp Aquatic.cpp Terrestrial.cpp ./penguin
// ON WINDOWS:
// g++ -o penguin Main.cpp Penguin.cpp Aquatic.cpp Terrestrial.cpp
// ./penguin