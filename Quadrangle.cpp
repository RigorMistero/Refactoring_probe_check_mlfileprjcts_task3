#pragma once
#include <iostream>
#include "Figure.h"
#include "Quadrangle.h"

Quadrangle::Quadrangle(int value_Side1, int value_Side2, int value_Side3, int value_Side4, int value_Agle1, int value_Agle2, int value_Agle3, int value_Agle4)
{
    side_a = value_Side1;
    side_b = value_Side2;
    side_c = value_Side3;
    side_d = value_Side4;

    angle_A = value_Agle1;
    angle_B = value_Agle2;
    angle_C = value_Agle3;
    angle_D = value_Agle4;
 }

Quadrangle::Quadrangle() {};

int Quadrangle::get_sides_count() { return sides_count; }
int Quadrangle::get_angles_count() { return angles_count; }

int Quadrangle::get_side_a() { return side_a; }
int Quadrangle::get_side_b() { return side_b; }
int Quadrangle::get_side_c() { return side_c; }
int Quadrangle::get_side_d() { return side_d; }

int Quadrangle::get_angle_A() { return angle_A; }
int Quadrangle::get_angle_B() { return angle_B; }
int Quadrangle::get_angle_C() { return angle_C; }
int Quadrangle::get_angle_D() { return angle_D; }



void Quadrangle::set_sides_count()  { sides_count = 4; }
void Quadrangle::set_angles_count()  { angles_count = 4; }

bool Quadrangle::true_false_figure_check()
{
    if ((get_angle_A() + get_angle_B() + get_angle_C() + get_angle_D()) == 360) return true;
    else return false;
}


void Quadrangle::print_info()
{
    std::cout << +"Quadrangle ";
    Figure::print_info();
}