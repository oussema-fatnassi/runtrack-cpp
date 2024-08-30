#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include <vector>
#include <memory>
#include "GameObject.hpp"

class Container
{
    private:
        std::vector<std::shared_ptr<GameObject> > objects;

    public:
        Container();
        ~Container();
        void add(std::shared_ptr<GameObject> object);
        void remove(std::shared_ptr<GameObject> object);
        void draw();
        void update();
};

#endif // CONTAINER_HPP