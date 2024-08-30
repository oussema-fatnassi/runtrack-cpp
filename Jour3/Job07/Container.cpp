#include "Container.hpp"

Container::Container()
{
}

Container::~Container()
{
}

void Container::add(std::shared_ptr<GameObject> object)
{
    objects.push_back(object);
}

void Container::remove(std::shared_ptr<GameObject> object)
{
    for (int i = 0; i < objects.size(); i++)
    {
        if (objects[i] == object)
        {
            objects.erase(objects.begin() + i);
            break;
        }
    }
}

void Container::draw()
{
    for (int i = 0; i < objects.size(); i++)
    {
        objects[i]->draw();
    }
}

void Container::update()
{
    for (int i = 0; i < objects.size(); i++)
    {
        objects[i]->update();
    }
}

std::vector<std::shared_ptr<GameObject> > Container::getObjects()
{
    return objects;
}

