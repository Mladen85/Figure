#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"

namespace Figure
{
    template<class T, class U>
    class Rectangle : public Figure<T,U>
    {
    private:
        T b;

    public:
        Rectangle();
        Rectangle(T side_a);
        Rectangle(T side_a, T side_b);

        T getSideA() const;
        T getSideB() const;
        U getDiagonal() const;

        void setSideA(T side_a);
        void setSideB(T side_b);
        void setRectangle(T side_a, T side_b);

        U getCurcum() const;
        U getSquare() const;
    };
}

#endif //RECTANGLE_H