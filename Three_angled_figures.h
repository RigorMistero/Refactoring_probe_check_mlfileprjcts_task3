#pragma once
#include <iostream>
#include "Figure.h"

class Triangle : public Figure
{
protected:
    int sides_count = 3;
    int angles_count = 3;

    int side_a = 0;
    int side_b = 0;
    int side_c = 0;

    int angle_A = 0;
    int angle_B = 0;
    int angle_C = 0;

public:
    Triangle(int value_Side1, int value_Side2, int value_Side3, int value_Agle1, int value_Agle2, int value_Agle3)
    {
        side_a = value_Side1;
        side_b = value_Side2;
        side_c = value_Side3;

        angle_A = value_Agle1;
        angle_B = value_Agle2;
        angle_C = value_Agle3;
    }

    Triangle()
    {
    };

    int get_sides_count() override { return sides_count; } // геттер
    int get_angles_count() override { return angles_count; } // геттер

    int get_side_a() { return side_a; } // геттер
    int get_side_b() { return side_b; } // геттер
    int get_side_c() { return side_c; } // геттер

    int get_angle_A() { return angle_A; } // геттер
    int get_angle_B() { return angle_B; } // геттер
    int get_angle_C() { return angle_C; } // геттер

    //void print_info(Figure* base)override{base->print_info();//std::cout << + " Triangle";}


    void set_sides_count()override { sides_count = 3; } // сеттер
    void set_angles_count() override { angles_count = 3; } // сеттер

    bool true_false_figure_check();
    //{
    //    if ((get_sides_count() == sides_count) && (get_angle_A() + get_angle_B() + get_angle_C()) == 180) return true;
    //    else return false;
   // }

    void print_info()override
    {
        std::cout << +"Triangle ";
        Figure::print_info();
    }

};


class Rectangular_Triangle : public Triangle
{
public:
    Rectangular_Triangle
    (int value_Side1, int value_Side2, int value_Side3, int value_Agle1, int value_Agle2)
    {
        side_a = value_Side1;
        side_b = value_Side2;
        side_c = value_Side3;

        angle_A = value_Agle1;
        angle_B = value_Agle2;
        angle_C = 90;
    }

    bool true_false_figure_check() override
    {
        if ((get_sides_count() == sides_count) && (get_angle_A() + get_angle_B() + get_angle_C()) == 180 && get_angle_C() == 90) return true;
        else return false;
    }

    void print_info()override
    {
        std::cout << +"Rectangular Triangle ";
        Figure::print_info();

    }
};


class Isosceles_Triangle : public Triangle // a = b, c;
{
public:
    Isosceles_Triangle
    (int value_Side1, int value_Side3, int value_Agle1, int value_Agle3)
    {

        side_a = value_Side1;
        side_b = value_Side3;
        side_c = value_Side1;

        angle_A = value_Agle1;
        angle_B = value_Agle3;
        angle_C = value_Agle1;
    }

    bool true_false_figure_check() override
    {
        if ((get_side_a() == get_side_c()) && (get_angle_A() == get_angle_C())) return true;
        else return false;
    }

    void print_info()override
    {
        std::cout << +"Isosceles Triangle ";
        Figure::print_info();
    }

};

class Equilateral_Triangle : public Triangle // a = b, c;
{
public:
    Equilateral_Triangle
    (int value_Side)
    {
        side_a = value_Side;
        side_b = value_Side;
        side_c = value_Side;
        angle_A = 60;
        angle_B = 60;
        angle_C = 60;
    }

    bool true_false_figure_check() override
    {

        if (get_angle_A() == get_angle_B() && get_angle_A() == get_angle_C() &&
            get_side_a() == get_side_b() && get_side_a() == get_side_c())
            return true;
        else return false;
    }

    void print_info()override
    {
        std::cout << +"Equilateral Triangle ";
        Figure::print_info();
    }

};