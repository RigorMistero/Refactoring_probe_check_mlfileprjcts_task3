#include <iostream>

#include "Figure.h"
#include "Three_angled_figures.h"


    int Triangle::get_sides_count() override { return sides_count; } // ������
    int Triangle::get_angles_count() override { return angles_count; } // ������

    int Triangle::get_side_a() { return side_a; } // ������
    int Triangle::get_side_b() { return side_b; } // ������
    int Triangle::get_side_c() { return side_c; } // ������

    int Triangle::get_angle_A() { return angle_A; } // ������
    int Triangle::get_angle_B() { return angle_B; } // ������
    int Triangle::get_angle_C() { return angle_C; } // ������

    void Triangle::set_sides_count()override   { sides_count = 3; } // ������
    void Triangle::set_angles_count() override { angles_count = 3; } // ������

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

