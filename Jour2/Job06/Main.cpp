#include "Penguin.hpp"
#include <iostream>

int main() {

    list<string> meetingPlaces = {"Lake", "Beach", "Glacier", "Coast", "Ocean"};
    for (auto place : meetingPlaces) {
        Penguin::addMeetingPlace(place);
    }
    cout << "Meeting places:" << endl;
    Penguin::showMeetingPlaces();
    Penguin::removeMeetingPlace("Lake");
    cout << "Meeting places after removing Lake:" << endl;
    Penguin::showMeetingPlaces();


    return 0;
}

// to test this code, run the following commands:
// ON MAC:
// clang++ -std=c++11  -o penguin Main.cpp Penguin.cpp Aquatic.cpp Terrestrial.cpp ./penguin
// ON WINDOWS:
// g++ -o penguin Main.cpp Penguin.cpp Aquatic.cpp Terrestrial.cpp
// ./penguin