#pragma once

class Isosceles_Triangle : public Triangle // a = b, c;
{
public:
    Isosceles_Triangle(int value_Side1, int value_Side3, int value_Agle1, int value_Agle3);
    bool true_false_figure_check() override;
    void print_info()override;
};
