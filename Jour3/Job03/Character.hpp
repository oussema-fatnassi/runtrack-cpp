#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "GameObject.hpp"
#include <string>
using namespace std;

class Character : public GameObject
{
    private:
        string name;
        int health;
    public:
        Character(string name, int health);
        ~Character();
        void draw() override;
        void update() override;
        bool isAlive() const;
        void takeDamage(int damage);
        double getHealth() const ;
};

#endif // CHARACTER_HPP