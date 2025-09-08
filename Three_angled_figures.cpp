#include <iostream>

#include "Figure.h"
#include "Three_angled_figures.h"


    int Figure::get_sides_count() override { return sides_count; } // геттер
    int Figure::get_angles_count() override { return angles_count; } // геттер

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
          if ((Triangle::get_sides_count() == sides_count) && (Triangle::get_angle_A() + Triangle::get_angle_B() + Triangle::get_angle_C()) == 180) return true;
        else return false;
   }

    void Triangle::print_info() override
    {
        std::cout << +"Triangle ";
        Figure::print_info();
    }


//        Rectangular_Triangle
 //       (int value_Side1, int value_Side2, int value_Side3, int value_Agle1, int value_Agle2)
  //      {
   //         side_a = value_Side1;
    //        side_b = value_Side2;
     //       side_c = value_Side3;

   //         angle_A = value_Agle1;
  //          angle_B = value_Agle2;
   //         angle_C = 90;
   //     }

        bool Rectangular_Triangle::true_false_figure_check() override
        {
            if ((get_sides_count() == sides_count) && (get_angle_A() + get_angle_B() + get_angle_C()) == 180 && get_angle_C() == 90) return true;
            else return false;
        }

        void Rectangular_Triangle::print_info()override
        {
            std::cout << +"Rectangular Triangle ";
            Figure::print_info();

        }
    };

//        Isosceles_Triangle
//        (int value_Side1, int value_Side3, int value_Agle1, int value_Agle3)
//        {

//            side_a = value_Side1;
//            side_b = value_Side3;
//            side_c = value_Side1;

//            angle_A = value_Agle1;
//            angle_B = value_Agle3;
//            angle_C = value_Agle1;
//        }

        bool Isosceles_Triangle::true_false_figure_check() override
        {
            if ((Isosceles_Triangle::get_side_a() == Isosceles_Triangle::get_side_c()) && (Isosceles_Triangle::get_angle_A() == Isosceles_Triangle::get_angle_C())) return true;
            else return false;
        }

        void Isosceles_Triangle::print_info()override
        {
            std::cout << +"Isosceles Triangle ";
            Figure::print_info();
        }


/*        Equilateral_Triangle
        (int value_Side)
        {
            side_a = value_Side;
            side_b = value_Side;
            side_c = value_Side;
            angle_A = 60;
            angle_B = 60;
            angle_C = 60;
        }
*/
        bool Equilateral_Triangle::true_false_figure_check() override
        {

            if (Equilateral_Triangle::get_angle_A() == Equilateral_Triangle::get_angle_B() && Equilateral_Triangle::get_angle_A() == Equilateral_Triangle::get_angle_C() &&
                Equilateral_Triangle::get_side_a() == Equilateral_Triangle::get_side_b() && Equilateral_Triangle::get_side_a() == get_side_c())
                return true;
            else return false;
        }

        void Equilateral_Triangle::print_info()override
        {
            std::cout << +"Equilateral Triangle ";
            Figure::print_info();
        }

 