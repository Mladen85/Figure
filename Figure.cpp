#include "Figure.h"

namespace Figure
{
    template <class T, class U>
    Figure<T, U>::Figure()
    {
        a = (T)0;
    }

    template <class T, class U>
    T Figure<T, U>::getA() const
    {
        return a;
    }

    template <class T, class U>
    void Figure<T, U>::setA(const T new_a)
    {
        a = new_a;
    }
}
//At the end of each cpp library file add used template types
//This is so that compiler knows which types can be used
//It is feature, because only tested types can be used
template class Figure::Figure<int, double>;