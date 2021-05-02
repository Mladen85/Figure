#include "Figure.h"
#include "Equilateral_triangle.h"
#include <cmath>

namespace Figure
{
    template <class T, class U>
    Equilateral_triangle<T, U>::Equilateral_triangle()
    {
        this->setA((T)0);
    }

    template <class T, class U>
    Equilateral_triangle<T, U>::Equilateral_triangle(T a)
    {
        this->setA(a);
    }

    template <class T, class U>
    T Equilateral_triangle<T, U>::getSideA() const
    {
        return this->getA();
    }

    template <class T, class U>
    U Equilateral_triangle<T, U>::getHigh() const
    {
        U temp_high = 0;

        temp_high = (U)((double)(this->getA()) * std::sqrt((double)3) / 2);

        return temp_high;
    }


    template <class T, class U>
    void Equilateral_triangle<T, U>::setSideA(int a)
    {
        this->setA(a);
    }


    template <class T, class U>
    U Equilateral_triangle<T, U>::getCurcum() const
    {
        return (U)(this->getA() * 3);
    }

    template <class T, class U>
    U Equilateral_triangle<T, U>::getSquare() const
    {
        U temp_square = 0;

        temp_square = (U)((double)this->getA() * getHigh() / 2);

        return temp_square;
    }
}
//At the end of each cpp library file add used template types
//This is so that compiler knows which types can be used
//It is feature, because only tested types can be used
template class Figure::Equilateral_triangle<int, double>;