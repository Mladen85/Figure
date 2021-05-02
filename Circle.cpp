#include "Figure.h"
#include "Circle.h"
// #include <iostream>

//Use const pi from math library
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
    template <class T, class U>
    Circle<T, U>::Circle()
    {
        this->setA((T)0);
    }

    template <class T, class U>
    Circle<T, U>::Circle(T r)
    {
        this->setA(r);
    }


    template <class T, class U>
    T Circle<T, U>::getRadius() const
    {
        return this->getA();
    }

    template <class T, class U>
    T Circle<T, U>::getDiameter() const
    {
        return (this->getA() * 2);
    }

    template <class T, class U>
    void Circle<T, U>::setRadius(T r)
    {
        this->setA(r);
    }


    template <class T, class U>
    U Circle<T, U>::getCurcum() const
    {
        U temp_curcum = (U)0;

        temp_curcum = (U)((double)getRadius() * 2 * M_PI); //O = 2 * r * pi

        return temp_curcum;
    }

    template <class T, class U>
    U Circle<T, U>::getSquare() const
    {
        U temp_square = (U)0;

        // temp_square = (U)((double)std::pow<T, int>(getRadius, 2) * M_PI);
        temp_square = (U)((double)getRadius() * getRadius() * M_PI);

        return temp_square;
    }

    // template<typename T, typename U>
    // std::ostream &operator<<(std::ostream &out, const Circle<T, U> &circle)
    // {
    //     out << "Circle: "
    // }
}
//At the end of each cpp library file add used template types
//This is so that compiler knows which types can be used
//It is feature, because only tested types can be used
template class Figure::Circle<int, double>;