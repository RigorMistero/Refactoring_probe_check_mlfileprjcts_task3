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

    int get_sides_count() override;// { return sides_count; } // ������
    int get_angles_count() override;// { return angles_count; } // ������

    int get_side_a();// { return side_a; } // ������
    int get_side_b();// { return side_b; } // ������
    int get_side_c();// { return side_c; } // ������

    int get_angle_A();// { return angle_A; } // ������
    int get_angle_B();// { return angle_B; } // ������
    int get_angle_C();// { return angle_C; } // ������

    void set_sides_count()override;// { sides_count = 3; } // ������
    void set_angles_count() override;// { angles_count = 3; } // ������

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
