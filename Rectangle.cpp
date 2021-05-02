#include "Figure.h"
#include "Rectangle.h"
#include <cmath>

namespace Figure
{
    ///Constructors
    template <class T, class U>
    Rectangle<T, U>::Rectangle()
    {
        this->setA(0);
        b = 0;
    }

    template <class T, class U>
    Rectangle<T, U>::Rectangle(T side_a)
    {
        this->setA(side_a);
        b = side_a;
    }

    template <class T, class U>
    Rectangle<T, U>::Rectangle(T side_a, T side_b)
    {
        this->setA(side_a);
        b = side_b;
    }


    ///Getters
    template <class T, class U>
    T Rectangle<T, U>::getSideA() const
    {
        return this->getA();
    }

    template <class T, class U>
    T Rectangle<T, U>::getSideB() const
    {
        return b;
    }

    template <class T, class U>
    U Rectangle<T, U>::getDiagonal() const
    {
        U temp_diagonal = 0;

        temp_diagonal = (U)(sqrt((double)getSideA() * getSideA() + (double)getSideB() * getSideB()));

        return temp_diagonal;
    }


    ///Setters
    template <class T, class U>
    void Rectangle<T, U>::setSideA(T side_a)
    {
        this->setA(side_a);
    }

    template <class T, class U>
    void Rectangle<T, U>::setSideB(T side_b)
    {
        b = side_b;
    }

    template <class T, class U>
    void Rectangle<T, U>::setRectangle(T side_a, T side_b)
    {
        this->setA(side_a);
        b = side_b;
    }


    ///Member functions
    template <class T, class U>
    U Rectangle<T, U>::getCurcum() const
    {
        return (U)((getSideA() + b) * 2);
    }

    template <class T, class U>
    U Rectangle<T, U>::getSquare() const
    {
        return (U)(getSideA() * b);
    }
}
//At the end of each cpp library file add used template types
//This is so that compiler knows which types can be used
//It is feature, because only tested types can be used
template class Figure::Rectangle<int, double>;