#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
    protected:
        int side_a = 0;
        int side_b = 0;
        int side_c = 0;
        int side_d = 0;

        int angle_A = 0;
        int angle_B = 0;
        int angle_C = 0;
        int angle_D = 0;

        int sides_count = 4;
        int angles_count = 4;

    public:
        Quadrangle(int value_Side1, int value_Side2, int value_Side3, int value_Side4, int value_Agle1, int value_Agle2, int value_Agle3, int value_Agle4);
        //{
        //    side_a = value_Side1;
        //    side_b = value_Side2;
        //    side_c = value_Side3;
        //    side_d = value_Side4;

        //    angle_A = value_Agle1;
        //    angle_B = value_Agle2;
        //    angle_C = value_Agle3;
        //    angle_D = value_Agle4;
       // }

        Quadrangle();
        //{
        //};

        int get_sides_count()override;// { return sides_count; }
        int get_angles_count()override;// { return angles_count; }

        int get_side_a();// { return side_a; }
        int get_side_b();// { return side_b; }
        int get_side_c();// { return side_c; }
        int get_side_d();// { return side_d; }

        int get_angle_A();// { return angle_A; }
        int get_angle_B();// { return angle_B; }
        int get_angle_C();// { return angle_C; }
        int get_angle_D();// { return angle_D; }



        void set_sides_count() override;// { sides_count = 4; }
        void set_angles_count() override;// { angles_count = 4; }

        bool true_false_figure_check() override;
        //{
        //    if ((get_angle_A() + get_angle_B() + get_angle_C() + get_angle_D()) == 360) return true;
        //    else return false;
       // }


        void print_info()override;
        //{
        //    std::cout << +"Quadrangle ";
        //    Figure::print_info();
       // }

    };