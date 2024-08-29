#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

class Vector2d {
    protected:
        double x;
        double y;

    public:
        Vector2d(double x, double y);               
        void setX(double x);
        void setY(double y);
        double getX() const;
        double getY() const;

        double distance(Vector2d const& other) const;
        Vector2d operator+(Vector2d const& other) const;
        Vector2d operator-(Vector2d const& other) const;
};

#endif // VECTOR2D_HPP