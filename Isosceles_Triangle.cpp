#pragma once
#include <iostream>
#include "Triangle.h"
#include "Isosceles_Triangle.h"

Isosceles_Triangle::Isosceles_Triangle (int value_Side1, int value_Side3, int value_Agle1, int value_Agle3)
    {
        side_a = value_Side1;
        side_b = value_Side3;
        side_c = value_Side1;

        angle_A = value_Agle1;
        angle_B = value_Agle3;
        angle_C = value_Agle1;
    }

    bool Isosceles_Triangle::true_false_figure_check() 
    {
        if ((get_side_a() == get_side_c()) && (get_angle_A() == get_angle_C())) return true;
        else return false;
    }

    void Isosceles_Triangle::print_info()
    {
      std::cout << +"Isosceles Triangle ";
      Figure::print_info();
    }


