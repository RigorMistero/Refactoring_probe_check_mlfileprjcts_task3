#pragma once
#include <iostream>
#include "Figure.h"
#include "Triangle.h"


    Triangle::Triangle(int value_Side1, int value_Side2, int value_Side3, int value_Agle1, int value_Agle2, int value_Agle3)
    {
        side_a = value_Side1;
        side_b = value_Side2;
        side_c = value_Side3;

        angle_A = value_Agle1;
        angle_B = value_Agle2;
        angle_C = value_Agle3;
    }

    Triangle::Triangle()
    {
    };

    int     Triangle::get_sides_count()  { return sides_count; }
    int     Triangle::get_angles_count()  { return angles_count; } 

    int Triangle::get_side_a() { return side_a; }
    int Triangle::get_side_b() { return side_b; }
    int Triangle::get_side_c() { return side_c; }

    int Triangle::get_angle_A() { return angle_A; }
    int Triangle::get_angle_B() { return angle_B; }
    int Triangle::get_angle_C() { return angle_C; }

    //void print_info(Figure* base)override{base->print_info();//std::cout << + " Triangle";}


    void Triangle::set_sides_count() { sides_count = 3; } // сеттер
    void Triangle::set_angles_count()  { angles_count = 3; } // сеттер

    bool Triangle::true_false_figure_check() 
    {
        if ((Triangle::get_sides_count() == sides_count) && (Triangle::get_angle_A() + Triangle::get_angle_B() + Triangle::get_angle_C()) == 180) return true;
        else return false;
    }

    // public:
    void Triangle::print_info() 
    {
        std::cout << +"Triangle ";
        Figure::print_info();
    }

