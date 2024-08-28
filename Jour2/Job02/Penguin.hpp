#ifndef PENGUIN_HPP
#define PENGUIN_HPP

#include "Aquatic.hpp"
#include "Terrestrial.hpp"

class Penguin : public Aquatic, public Terrestrial {
public:
    Penguin(double swimSpeed, double walkSpeed);        
    Penguin(double swimSpeed, double walkSpeed, double slideSpeed); 
    Penguin(const Penguin& other);                      
    ~Penguin();

    void talk() const;

    void swim() const override;
    void walk() const override;
    void slide() const;                                 

    void setSwimSpeed(double speed);
    void setWalkSpeed(double speed);
    void setSlideSpeed(double speed);

private:
    double slideSpeed; 
};

#endif // PENGUIN_HPP
