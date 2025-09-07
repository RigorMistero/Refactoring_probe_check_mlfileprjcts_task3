#include <iostream>

#include "Figure.h"
#include "Three_angled_figures.h"


    int Triangle::get_sides_count() override { return sides_count; } // геттер
    int Triangle::get_angles_count() override { return angles_count; } // геттер

    int Triangle::get_side_a() { return side_a; } // геттер
    int Triangle::get_side_b() { return side_b; } // геттер
    int Triangle::get_side_c() { return side_c; } // геттер

    int Triangle::get_angle_A() { return angle_A; } // геттер
    int Triangle::get_angle_B() { return angle_B; } // геттер
    int Triangle::get_angle_C() { return angle_C; } // геттер

    void Triangle::set_sides_count()override   { sides_count = 3; } // сеттер
    void Triangle::set_angles_count() override { angles_count = 3; } // сеттер

    bool Triangle::true_false_figure_check() override
    {
        if ((get_sides_count() == sides_count) && (get_angle_A() + get_angle_B() + get_angle_C()) == 180) return true;
        else return false;
   }

    void Triangle::print_info()override
    {
        std::cout << +"Triangle ";
        Figure::print_info();
    }

