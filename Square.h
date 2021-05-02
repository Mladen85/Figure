#ifndef SQUARE_H
#define SQUARE_H

#include "Figure.h"

namespace Figure
{
    template <class T, class U>
    class Square : public Figure<T, U>
    {
    private:

    public:
        Square();
        Square(T side_a);

        T getSideA() const;
        U getDiagonal() const;

        void setSideA(T side_a);

        U getCurcum() const;
        U getSquare() const;
    };
}
#endif //SQUARE_H