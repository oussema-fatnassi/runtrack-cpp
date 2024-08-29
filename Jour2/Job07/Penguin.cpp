#include "Penguin.hpp"
#include <iostream>

Penguin::Penguin(double swimSpeed, double walkSpeed)
    : Aquatic(swimSpeed), Terrestrial(walkSpeed), slideSpeed(0.0) {}

Penguin::Penguin(double swimSpeed, double walkSpeed, double slideSpeed)
    : Aquatic(swimSpeed), Terrestrial(walkSpeed), slideSpeed(slideSpeed) {}

Penguin::Penguin(const Penguin& other)
    : Aquatic(other.swimSpeed), Terrestrial(other.walkSpeed), slideSpeed(other.slideSpeed) {}

Penguin::Penguin(string name, double swimSpeed, double walkSpeed, double slideSpeed)
    : name(name), Aquatic(swimSpeed), Terrestrial(walkSpeed), slideSpeed(slideSpeed) {}

vector<shared_ptr<Penguin>> Penguin::Penguins = vector<shared_ptr<Penguin>>();
list<string> Penguin::meetingPlace = list<string>();

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
    Penguins.push_back(penguin);
}

void Penguin::removePenguin(shared_ptr<Penguin> penguin) {
    Penguins.erase(Penguins.begin());
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

void Penguin::setName(string name) {
    this->name = name;
}

double Penguin::getSlideSpeed() const {
    return slideSpeed;
}

double Penguin::getSwimSpeed() const {
    return swimSpeed;
}

double Penguin::getWalkSpeed() const {
    return walkSpeed;
}

string Penguin::getName() const {
    return name;
}

double Penguin::courseTravelTime() const{
    double slideDistance = 15.0;
    double walkDistance = 20.0;
    double swimDistance = 50.0;
    double walkDistance2 = 15.0;

    double slideTime = slideDistance / slideSpeed;
    double walkTime = walkDistance / walkSpeed;
    double swimTime = swimDistance / swimSpeed;
    double walkTime2 = walkDistance2 / walkSpeed;

    double totalTime = slideTime + walkTime + swimTime + walkTime2;
    return totalTime;
}

void Penguin::showTravelTime() {

    sort(Penguins.begin(), Penguins.end(), [](shared_ptr<Penguin> p1, shared_ptr<Penguin> p2) {
        return p1->courseTravelTime() < p2->courseTravelTime();
    });

    for (auto penguin : Penguins) {
        cout << penguin->name << " will take " << penguin-> courseTravelTime() << " seconds to complete the course." << endl;
    }
}

void Penguin::addMeetingPlace(const string& place) {
    meetingPlace.push_back(place);
}

void Penguin::removeMeetingPlace(const string& place) {
    meetingPlace.remove(place);
}

void Penguin::showMeetingPlaces() {
    for (auto place : meetingPlace) {
        cout << place << endl;
    }
}

void Penguin::addCompetence(const string& competence, int level) {
    competences[competence] = level;
}

void Penguin::removeCompetence(const string& competence) {
    competences.erase(competence);
}

void Penguin::showCompetences() const {
    for (auto competence : competences) {
        cout << competence.first << " : " << competence.second << endl;
    }
}

void Penguin::modifyCompetence(const string& competence, int level) {
    competences[competence] = level;
}