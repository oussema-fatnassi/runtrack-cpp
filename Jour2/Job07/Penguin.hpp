#ifndef PENGUIN_HPP
#define PENGUIN_HPP

#include "Aquatic.hpp"
#include "Terrestrial.hpp"
#include <vector>
#include <memory>
#include <string>
#include <list>
#include <algorithm>
#include <map>
using namespace std;

class Penguin : public Aquatic, public Terrestrial {
public:
    Penguin(double swimSpeed, double walkSpeed);
    Penguin(double swimSpeed, double walkSpeed, double slideSpeed);
    Penguin(const Penguin& other);
    Penguin(string name, double swimSpeed, double walkSpeed, double slideSpeed);

    ~Penguin();

    void talk() const;
    void swim() const override;
    void walk() const override;
    void slide() const;

    void setSwimSpeed(double speed);
    void setWalkSpeed(double speed);
    void setSlideSpeed(double speed);
    void setName(string name);

    double getSlideSpeed() const;
    double getSwimSpeed() const;
    double getWalkSpeed() const;
    string getName() const;

    double courseTravelTime() const;
    static void showTravelTime();
    static vector<shared_ptr<Penguin> > Penguins;
    void addPenguin(shared_ptr<Penguin> penguin);
    void removePenguin(shared_ptr<Penguin> penguin);

    static std::list<std::string> meetingPlace;
    static void addMeetingPlace(const string& place);
    static void removeMeetingPlace(const string& place);
    static void showMeetingPlaces();

    map<string, int> competences;
    void addCompetence(const string& competence, int level);
    void removeCompetence(const string& competence);
    void showCompetences() const;
    void modifyCompetence(const string& competence, int level);

private:
    double slideSpeed;
    string name;
};

#endif // PENGUIN_HPP