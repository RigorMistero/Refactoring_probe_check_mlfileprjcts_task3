#pragma once
#include "Figure.h"
#include <iostream>

  //  virtual   
int  Figure::get_sides_count()  { return sides_count; }
void Figure::set_sides_count()  { sides_count = 0; }
int  Figure::get_angles_count() { return angles_count; }
void Figure::set_angles_count() { angles_count = 0; } 

bool Figure::true_false_figure_check()
    {
        if (get_sides_count() == sides_count && get_angles_count() == angles_count) return true;
        else return false;
    }

void Figure::print_info()
    {
        std::cout << "Figure:";
        std::cout << std::endl;

        if (true_false_figure_check() == true) std::cout << "True Figure";
        else std::cout << "False Figure";

        std::cout << std::endl;
        std::cout << "Number of sides: " << get_sides_count();
        std::cout << std::endl;
    }