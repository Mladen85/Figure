#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Equilateral_triangle.h"
#include "Rectangle.h"
#include "Square.h"

int main()
{
    Figure::Circle<int, double> c1(5);
    std::cout << "Circle r = " << c1.getRadius() << " :" << std::endl;
    std::cout << "O = " << c1.getCurcum() << " P = " << c1.getSquare() << std::endl;

    Figure::Equilateral_triangle<int, double> t1(5);
    std::cout << "Triangle a = " << t1.getSideA() << " :" << std::endl;
    std::cout << "O = " << t1.getCurcum() << " P = " << t1.getSquare() << std::endl;

    Figure::Rectangle<int, double> r1(3, 4);
    std::cout << "Rectangle a = " << r1.getSideA() << " b = " << r1.getSideB() << " :" << std::endl;
    std::cout << "O = " << r1.getCurcum() << " P = " << r1.getSquare() << std::endl;

    Figure::Square<int, double> s1(5);
    std::cout << "Square a = " << s1.getSideA() << " :" << std::endl;
    std::cout << "O = " << s1.getCurcum() << " P = " << s1.getSquare() << std::endl;

    return 0;
}