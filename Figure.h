#pragma once

class Figure
{
protected:
    int sides_count = 0;
    int angles_count = 0;

    //Figure(int num_sides,int num_angles)
    //{
    //    sides_count = num_sides;
    //    angles_count = num_angles;
    //}

public:

    //    Figure(){sides_count = set_sides_count (); angles_count = set_angles_count ()};

    virtual   int get_sides_count();// { return sides_count; }
    virtual void set_sides_count();// { sides_count = 0; }
    virtual int get_angles_count();// { return angles_count; }
    virtual void set_angles_count();// { angles_count = 0; }

    virtual bool true_false_figure_check();
    //{
    //    if (get_sides_count() == sides_count && get_angles_count() == angles_count) return true;
    //    else return false;
    //}

    virtual void print_info();
    //{
    //    std::cout << "Figure:";
    //    std::cout << std::endl;

    //    true_false_figure_check();

   //     std::cout << std::endl;
   //     std::cout << "Number of sides: " << get_sides_count();
   //     std::cout << std::endl;
   // }
};
