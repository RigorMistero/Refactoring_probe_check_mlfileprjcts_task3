#pragma once
#include "Figure.h"

class Rectangle : public Quadrangle // 90 90 90 90
{
public:
    Rectangle (int value_Side13, int value_Side24);
    Rectangle();
    bool true_false_figure_check() override;
    void print_info()override;

};
