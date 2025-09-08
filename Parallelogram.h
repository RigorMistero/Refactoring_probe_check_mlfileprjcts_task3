#pragma once


class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int value_side13, int value_side24, int value_anlge13, int value_anlge24);
    Parallelogram(); 
    bool true_false_figure_check() override;
    void print_info()override;

};
