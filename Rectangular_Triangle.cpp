#pragma once
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Rectangular_Triangle.h"

 Rectangular_Triangle::Rectangular_Triangle (int value_Side1, int value_Side2, int value_Side3, int value_Agle1, int value_Agle2)
    {
        side_a = value_Side1;
        side_b = value_Side2;
        side_c = value_Side3;

        angle_A = value_Agle1;
        angle_B = value_Agle2;
        angle_C = 90;
    }

    bool Rectangular_Triangle::true_false_figure_check()
    {
        if ((get_sides_count() == sides_count) && (get_angle_A() + get_angle_B() + get_angle_C()) == 180 && get_angle_C() == 90) return true;
        else return false;
    }

    void Rectangular_Triangle::print_info()
    {
        std::cout << +"Rectangular Triangle ";
        Figure::print_info();

    }