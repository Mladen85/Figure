#include "Figure.h"
#include "Square.h"

//Use const sqrt(2) from math library
#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES_DEFINE_FLAG
#define _USE_MATH_DEFINES
#endif //_USE_MATH_DEFINES
#include <cmath>
// #include "math.h"
#ifdef _USE_MATH_DEFINES_DEFINE_FLAG
#undef _USE_MATH_DEFINES_DEFINE_FLAG
#undef _USE_MATH_DEFINES
#endif //_USE_MATH_DEFINES_DEFINE_FLAG

namespace Figure
{
    ///Constructors
    template <class T, class U>
    Square<T, U>::Square()
    {
        this->setA(0);
    }

    template <class T, class U>
    Square<T, U>::Square(T side_a)
    {
        this->setA(side_a);
    }


    ///Getters
    template <class T, class U>
    T Square<T, U>::getSideA() const
    {
        return this->getA();
    }

    template <class T, class U>
    U Square<T, U>::getDiagonal() const
    {
        return (U)((double)getSideA() * M_SQRT2);
    }


    ///Setters
    template <class T, class U>
    void Square<T, U>::setSideA(T side_a)
    {
        this->setA(side_a);
    }


    ///Member functions
    template <class T, class U>
    U Square<T, U>::getCurcum() const
    {
        return (U)(getSideA() * 4);
    }

    template <class T, class U>
    U Square<T, U>::getSquare() const
    {
        return (U)(getSideA() * getSideA());
    }
}
//At the end of each cpp library file add used template types
//This is so that compiler knows which types can be used
//It is feature, because only tested types can be used
template class Figure::Square<int, double>;