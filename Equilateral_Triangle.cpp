#pragma once 
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Equilateral_Triangle.h"

Equilateral_Triangle::Equilateral_Triangle (int value_Side)
{
    side_a = value_Side;
    side_b = value_Side;
    side_c = value_Side;
    angle_A = 60;
    angle_B = 60;
    angle_C = 60;
}

bool Equilateral_Triangle::true_false_figure_check()
{

    if (get_angle_A() == get_angle_B() && get_angle_A() == get_angle_C() &&
        get_side_a() == get_side_b() && get_side_a() == get_side_c())
        return true;
    else return false;
}

void Equilateral_Triangle::print_info()
{
    std::cout << +"Equilateral Triangle ";
    Figure::print_info();
}