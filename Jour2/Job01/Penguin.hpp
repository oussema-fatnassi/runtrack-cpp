#ifndef PENGUIN_HPP
#define PENGUIN_HPP

#include "Aquatic.hpp"
#include "Terrestrial.hpp"

class Penguin : public Aquatic, public Terrestrial {
public:
    Penguin(double swimSpeed, double walkSpeed); 
    ~Penguin();                                  

    void talk() const;                           

    void swim() const override;                  
    void walk() const override;                  
};

#endif // PENGUIN_HPP
