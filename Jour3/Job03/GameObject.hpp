#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include "Vector2d.hpp"

class GameObject : public Vector2d 
{
    private:
    public:
        virtual void draw() = 0;
        virtual void update() = 0;
        GameObject() = default;
        ~GameObject();
};

#endif // GAMEOBJECT_HPP
