#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

#include "Figure.h"

namespace Figure
{
    template<class T, class U>
    class Equilateral_triangle : public Figure<T, U>
    {
    private:
    public:
        Equilateral_triangle();
        Equilateral_triangle(T a);

        T getSideA() const;
        U getHigh() const;

        void setSideA(int a);

        U getCurcum() const;
        U getSquare() const;
    };
}

#endif //EQUILATERAL_TRIANGLE_H