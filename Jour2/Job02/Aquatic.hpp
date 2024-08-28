#ifndef AQUATIC_HPP
#define AQUATIC_HPP

class Aquatic {
protected:
    double swimSpeed;  

public:
    Aquatic(double speed = 0.0); 
    virtual ~Aquatic();          

    virtual void swim() const;   
};

#endif // AQUATIC_HPP
