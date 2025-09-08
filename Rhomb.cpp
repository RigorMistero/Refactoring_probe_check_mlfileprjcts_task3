#pragma once
#include <iostream>

#include "Rhomb.h"

Rhomb::Rhomb(int value_side1234, int value_agle_13, int value_agle_24)
{
    side_a = value_side1234;
    side_b = value_side1234;
    side_c = value_side1234;
    side_d = value_side1234;

    angle_A = value_agle_13;
    angle_B = value_agle_24;
    angle_C = value_agle_13;
    angle_D = value_agle_24;

}

bool Rhomb::true_false_figure_check()
{
    if (get_side_a() == get_side_b() &&
        get_side_a() == get_side_c() &&
        get_side_a() == get_side_d() &&
        get_angle_A() == get_angle_C() &&
        get_angle_B() == get_angle_D())
        return true;
    else return false;
}

void Rhomb::print_info()
{
    std::cout << +"Rhomb ";
    Figure::print_info();
}