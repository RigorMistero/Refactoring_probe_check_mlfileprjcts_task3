#pragma once
#include <iostream>
#include "Figure.h"
#include "Quadrangle.h"
#include "Parallelogram.h"

Parallelogram::Parallelogram(int value_side13, int value_side24, int value_anlge13, int value_anlge24)
    {
        side_a = value_side13;
        side_b = value_side24;
        side_c = value_side13;
        side_d = value_side24;
    angle_A = value_anlge13;
    angle_B = value_anlge24;
    angle_C = value_anlge13;
    angle_D = value_anlge24;
}

Parallelogram::Parallelogram() {};

bool Parallelogram::true_false_figure_check()
{
    if (get_side_a() == get_side_c() &&
        get_side_b() == get_side_d() &&
        get_angle_A() == get_angle_C() &&
        get_angle_B() == get_angle_D())
        return true;
    else return false;
}

void Parallelogram::print_info()
{
    std::cout << +"Parallelogram ";
    Figure::print_info();
}

