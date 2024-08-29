#ifndef DECORATION_HPP
#define DECORATION_HPP

#include "GameObject.hpp"
#include "Vector2d.hpp"

class Decoration : public GameObject
{
    private:
    public:
        Decoration();
        ~Decoration();
        void draw() override;
        void update() override;
};

#endif // DECORATION_HPP