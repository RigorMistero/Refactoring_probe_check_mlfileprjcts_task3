#pragma once
#include "Figure.h"
#include "Triangle.h"

class Rectangular_Triangle : public Triangle
{
public:
    Rectangular_Triangle (int value_Side1, int value_Side2, int value_Side3, int value_Agle1, int value_Agle2);
    bool true_false_figure_check() override;
    void print_info()override;
   
};
