#ifndef BOX_HPP
#define BOX_HPP

template <typename T> class Box
{
    private:
        T element;
    public:
        Box(T element) : element(element) {}
        T getElement();
};

#endif // BOX_HPP
