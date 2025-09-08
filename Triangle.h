#pragma once
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
    Triangle(int value_Side1, int value_Side2, int value_Side3, int value_Agle1, int value_Agle2, int value_Agle3);
    Triangle(); 

    int get_sides_count()   override; 
    int get_angles_count()  override;

    int get_side_a(); 
    int get_side_b(); 
    int get_side_c(); 

    int get_angle_A();
    int get_angle_B();
    int get_angle_C();

    void set_sides_count()         override;
    void set_angles_count()        override;
    bool true_false_figure_check() override;
    void print_info()              override;
   
};