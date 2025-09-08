#pragma once

class Square : public Rectangle
{
public:
    Square(int value_side1234);
    //{
    //    side_a = value_side1234;
    //    side_b = value_side1234;
    //    side_c = value_side1234;
    //    side_d = value_side1234;
    //    angle_A = 90;
    //    angle_B = 90;
    //    angle_C = 90;
    //    angle_D = 90;
   // }

    bool true_false_figure_check() override;
    //{
    //    if (get_side_a() == get_side_b() &&
    //        get_side_a() == get_side_c() &&
    //        get_side_a() == get_side_d() &&
    //        get_angle_A() == 90 &&
    //        get_angle_B() == 90 &&
    //        get_angle_C() == 90 &&
    //        get_angle_D() == 90)
    //        std::cout << "True child figure";
    //    else std::cout << "Child figure is FALSE";
   // }

    void print_info()override;
    //{
    //    std::cout << +"Square ";
     //   Figure::print_info();
   // }
};

