#pragma once
#include <iostream>
#include "Quadrangle.h"
#include "Rectangle.h"

Rectangle::Rectangle (int value_Side13, int value_Side24)
{
    side_a = value_Side13;
    side_b = value_Side24;
    side_c = value_Side13;
    side_d = value_Side24;
    angle_A = 90;
    angle_B = 90;
    angle_C = 90;
    angle_D = 90;
}
Rectangle::Rectangle() {};

bool Rectangle::true_false_figure_check() 
{
    if (get_side_a() == get_side_c() && get_side_b() == get_side_d() &&
        get_angle_A() == 90 && get_angle_C() == 90 && get_angle_B() == 90 && get_angle_D() == 90) return true;
    else return false;
}

void Rectangle::print_info()
{
    std::cout << +"Rectangle ";
    Figure::print_info();
}