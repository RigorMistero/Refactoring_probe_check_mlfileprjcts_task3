
#include "Figure.h"
#include "Three_angled_figures.h"
#include <iostream>

/*
class Quadrangle : public Figure
{
{
protected:
    int side_a;
    int side_b;
    int side_c;
    int side_d;

    int angle_A;
    int angle_B;
    int angle_C;
    int angle_D;

    int sides_count = 4;
    int angles_count = 4;

public:
    Quadrangle(int value_Side1, int value_Side2, int value_Side3, int value_Side4, int value_Agle1, int value_Agle2, int value_Agle3, int value_Agle4)
    {
        side_a = value_Side1;
        side_b = value_Side2;
        side_c = value_Side3;
        side_d = value_Side4;

        angle_A = value_Agle1;
        angle_B = value_Agle2;
        angle_C = value_Agle3;
        angle_D = value_Agle4;
    }

    Quadrangle()
    {
    };

    int get_sides_count()override { return sides_count; }
    int get_angles_count()override { return angles_count; }

    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_side_d() { return side_d; }

    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
    int get_angle_D() { return angle_D; }



    void set_sides_count() override { sides_count = 4; }
    void set_angles_count() override { angles_count = 4; }

    bool true_false_figure_check() override
    {
        if ((get_angle_A() + get_angle_B() + get_angle_C() + get_angle_D()) == 360) std::cout << "True child figure";
        else std::cout << "Child figure is FALSE";
    }

    // public:
    void print_info()override
    {
        std::cout << +"Quadrangle ";
        Figure::print_info();
    }

};

class Rectangle : public Quadrangle // 90 90 90 90
{
public:
    Rectangle
    (int value_Side13, int value_Side24)
    {
        side_a = value_Side13;
        side_b = value_Side24;
        side_c = value_Side13;
        side_d = value_Side24;
        angle_A = 90;
        angle_B = 90;
        angle_C = 90;
        angle_D = 90;
    }
    Rectangle() {};

    bool true_false_figure_check() override
    {
        if (get_side_a() == get_side_c() && get_side_b() == get_side_d() &&
            get_angle_A() == 90 && get_angle_C() == 90 && get_angle_B() == 90 && get_angle_D() == 90) std::cout << "True child figure";
        else std::cout << "Child figure is FALSE";
    }

    void print_info()override
    {
        std::cout << +"Rectangle ";
        Figure::print_info();
    }

};

class Square : public Rectangle
{
public:
    Square(int value_side1234)
    {
        side_a = value_side1234;
        side_b = value_side1234;
        side_c = value_side1234;
        side_d = value_side1234;
        angle_A = 90;
        angle_B = 90;
        angle_C = 90;
        angle_D = 90;
    }
    bool true_false_figure_check() override
    {
        if (get_side_a() == get_side_b() &&
            get_side_a() == get_side_c() &&
            get_side_a() == get_side_d() &&
            get_angle_A() == 90 &&
            get_angle_B() == 90 &&
            get_angle_C() == 90 &&
            get_angle_D() == 90)
            std::cout << "True child figure";
        else std::cout << "Child figure is FALSE";
    }

    void print_info()override
    {
        std::cout << +"Square ";
        Figure::print_info();
    }
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int value_side13, int value_side24, int value_anlge13, int value_anlge24)
    {
        side_a = value_side13;
        side_b = value_side24;
        side_c = value_side13;
        side_d = value_side24;
        angle_A = value_anlge13;
        angle_B = value_anlge24;
        angle_C = value_anlge13;
        angle_D = value_anlge24;
    }

    Parallelogram() {};

    bool true_false_figure_check() override
    {
        if (get_side_a() == get_side_c() &&
            get_side_b() == get_side_d() &&
            get_angle_A() == get_angle_C() &&
            get_angle_B() == get_angle_D())
            std::cout << "True child figure";
        else std::cout << "Child figure is FALSE";
    }

    void print_info()override
    {
        std::cout << +"Parallelogram ";
        Figure::print_info();
    }
};

class Rhomb : public Parallelogram
{
public:
    Rhomb(int value_side1234, int value_agle_13, int value_agle_24)
    {
        side_a = value_side1234;
        side_b = value_side1234;
        side_c = value_side1234;
        side_d = value_side1234;

        angle_A = value_agle_13;
        angle_B = value_agle_24;
        angle_C = value_agle_13;
        angle_D = value_agle_24;

    }

    bool true_false_figure_check() override
    {
        if (get_side_a() == get_side_b() &&
            get_side_a() == get_side_c() &&
            get_side_a() == get_side_d() &&
            get_angle_A() == get_angle_C() &&
            get_angle_B() == get_angle_D())
            std::cout << "True child figure";
        else std::cout << "Child figure is FALSE";
    }

    void print_info()override
    {
        std::cout << +"Rhomb ";
        Figure::print_info();
    }
};
*/
int main(int argc, char** argv)
{
    Figure figure0;
    figure0.print_info();

    std::cout << std::endl;
    
    
    Triangle triangle(10, 20, 30, 30, 60, 180); //   Child child;

    Figure* figure1 = &triangle;
    figure1->print_info();
    std::cout << "Sides: a = " << triangle.get_side_a() << ", b = " << triangle.get_side_b() << ", c = " << triangle.get_side_c() << std::endl;
    std::cout << "Angles: A = " << triangle.get_angle_A() << ", B = " << triangle.get_angle_B() << ", C = " << triangle.get_angle_C() << std::endl;
    std::cout << std::endl;
    
    Rectangular_Triangle rectangular_triangle(10, 20, 30, 30, 60); //   Child child;

    Figure* figure2 = &rectangular_triangle;
    figure2->print_info();
    std::cout << "Sides: a = " << rectangular_triangle.get_side_a() << ", b = " << rectangular_triangle.get_side_b() << ", c = " << rectangular_triangle.get_side_c() << std::endl;
    std::cout << "Angles: A = " << rectangular_triangle.get_angle_A() << ", B = " << rectangular_triangle.get_angle_B() << ", C = " << rectangular_triangle.get_angle_C() << std::endl;
    std::cout << std::endl;

    Isosceles_Triangle isoscel_trian(10, 30, 32, 68);

    Figure* figure3 = &isoscel_trian;
    figure3->print_info();
    std::cout << "Sides: a = " << isoscel_trian.get_side_a() << ", b = " << isoscel_trian.get_side_b() << ", c = " << isoscel_trian.get_side_c() << std::endl;
    std::cout << "Angles: A = " << isoscel_trian.get_angle_A() << ", B = " << isoscel_trian.get_angle_B() << ", C = " << isoscel_trian.get_angle_C() << std::endl;
    //std::cout << "This figure not an isosceles triangle: " << isoscel_trian.not_an_isosceles_trian() << std::endl;
    std::cout << std::endl;

    Equilateral_Triangle equiltrian(10);

    Figure* figure4 = &equiltrian;
    figure4->print_info();

    std::cout << "Sides: a = " << equiltrian.get_side_a() << ", b = " << equiltrian.get_side_b() << ", c = " << equiltrian.get_side_c() << std::endl;
    std::cout << "Angles: A = " << equiltrian.get_angle_A() << ", B = " << equiltrian.get_angle_B() << ", C = " << equiltrian.get_angle_C() << std::endl;
    std::cout << std::endl;
    
    /*
    Quadrangle guadrangle(10, 20, 30, 40, 50, 60, 70, 80);

    Figure* figure5 = &guadrangle;
    figure5->print_info();
    std::cout << "Sides: a = " << guadrangle.get_side_a() << ", b = " << guadrangle.get_side_b() << ", c = " << guadrangle.get_side_c() << ", d = " << guadrangle.get_side_d() << std::endl;
    std::cout << "Angles: A = " << guadrangle.get_angle_A() << ", B = " << guadrangle.get_angle_B() << ", C = " << guadrangle.get_angle_C() << ", D = " << guadrangle.get_angle_D() << std::endl;
    std::cout << std::endl;

    Rectangle rectangle(10, 20);

    Figure* figure6 = &rectangle;
    figure6->print_info();
    std::cout << "Sides: a = " << rectangle.get_side_a() << ", b = " << rectangle.get_side_b() << ", c = " << rectangle.get_side_c() << ", d = " << rectangle.get_side_d() << std::endl;
    std::cout << "Angles: A = " << rectangle.get_angle_A() << ", B = " << rectangle.get_angle_B() << ", C = " << rectangle.get_angle_C() << ", D = " << rectangle.get_angle_D() << std::endl;
    std::cout << std::endl;

    Square square(10);

    Figure* figure7 = &square;
    figure7->print_info();
    std::cout << "Sides: a = " << square.get_side_a() << ", b = " << square.get_side_b() << ", c = " << square.get_side_c() << ", d = " << square.get_side_d() << std::endl;
    std::cout << "Angles: A = " << square.get_angle_A() << ", B = " << square.get_angle_B() << ", C = " << square.get_angle_C() << ", D = " << square.get_angle_D() << std::endl;
    std::cout << std::endl;

    Parallelogram parallelogram(20, 30, 60, 120);

    Figure* figure8 = &parallelogram;
    figure8->print_info();
    std::cout << "Sides: a = " << parallelogram.get_side_a() << ", b = " << parallelogram.get_side_b() << ", c = " << parallelogram.get_side_c() << ", d = " << parallelogram.get_side_d() << std::endl;
    std::cout << "Angles: A = " << parallelogram.get_angle_A() << ", B = " << parallelogram.get_angle_B() << ", C = " << parallelogram.get_angle_C() << ", D = " << parallelogram.get_angle_D() << std::endl;
    std::cout << std::endl;


    Rhomb rhomb(20, 60, 120);

    Figure* figure9 = &rhomb;
    figure9->print_info();
    std::cout << "Sides: a = " << rhomb.get_side_a() << ", b = " << rhomb.get_side_b() << ", c = " << rhomb.get_side_c() << ", d = " << rhomb.get_side_d() << std::endl;
    std::cout << "Angles: A = " << rhomb.get_angle_A() << ", B = " << rhomb.get_angle_B() << ", C = " << rhomb.get_angle_C() << ", D = " << rhomb.get_angle_D() << std::endl;
    std::cout << std::endl;


    */
}