#ifndef FIGURE_H
#define FIGURE_H

namespace Figure
{
    template <class T, class U>
    class Figure
    {
    private:
        T a;

    public:
        Figure();

        T getA() const;
        void setA(const T new_a);

        virtual U getCurcum() const = 0;
        virtual U getSquare() const = 0;
    };
}

#endif //FIGURE_H