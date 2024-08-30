#ifndef DRAWSHAPE_HPP
#define DRAWSHAPE_HPP

template <typename T>
void drawShape(const T& shape) {
    shape.draw();
}

#endif // DRAWSHAPE_HPP