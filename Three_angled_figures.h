#pragma once

class Triangle : public Figure
{
protected:
    int sides_count = 3;
    int angles_count = 3;

    int side_a;
    int side_b;
    int side_c;

    int angle_A;
    int angle_B;
    int angle_C;

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

   // Triangle()
   // {    };

    int get_sides_count() override;// { return sides_count; } // геттер
    int get_angles_count() override;// { return angles_count; } // геттер

    int get_side_a();// { return side_a; } // геттер
    int get_side_b();// { return side_b; } // геттер
    int get_side_c();// { return side_c; } // геттер

    int get_angle_A();// { return angle_A; } // геттер
    int get_angle_B();// { return angle_B; } // геттер
    int get_angle_C();// { return angle_C; } // геттер

    void set_sides_count()override;// { sides_count = 3; } // сеттер
    void set_angles_count() override;// { angles_count = 3; } // сеттер

    bool true_false_figure_check() override;
    //{
    //    if ((get_sides_count() == sides_count) && (get_angle_A() + get_angle_B() + get_angle_C()) == 180) return true;
    //    else return false;
   // }

    void print_info()override;
    //{
    //    std::cout << +"Triangle ";
    //    Figure::print_info();
    //}

};
