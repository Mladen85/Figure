#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"
// #include <iostream>

namespace Figure
{
    template <class T, class U>
    class Circle : public Figure<T, U>
    {
    private:

    public:
        Circle();
        Circle(T r);

        T getRadius() const;
        T getDiameter() const;

        void setRadius(T r);

        U getCurcum() const;
        U getSquare() const;
    };

    // template <typename T, typename U>
    // std::ostream &operator<<(std::ostream &out, const Circle<T, U> &circle);
}

#endif //CIRCLE_H