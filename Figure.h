#pragma once

class Figure
{
protected:
    int sides_count = 0;
    int angles_count = 0;

public:
    virtual   int get_sides_count();
    virtual void set_sides_count();
    virtual int get_angles_count();
    virtual void set_angles_count();
    virtual bool true_false_figure_check();
    virtual void print_info();
};
