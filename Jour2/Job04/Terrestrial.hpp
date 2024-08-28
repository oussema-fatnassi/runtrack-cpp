#ifndef TERRESTRIAL_HPP
#define TERRESTRIAL_HPP

class Terrestrial {
protected:
    double walkSpeed;  

public:
    Terrestrial(double speed = 0.0); 
    virtual ~Terrestrial();          

    virtual void walk() const; 
};

#endif // TERRESTRIAL_HPP