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
        Vector2d position;
    public:
        Character(string name, int health, Vector2d position);
        ~Character();
        void draw() override;
        void update() override;
        bool isAlive() const;
        void takeDamage(int damage);
        double getHealth() const ;
        Vector2d getPosition() const;
        string getName() const;
        void setPosition(Vector2d position);
};

#endif // CHARACTER_HPP