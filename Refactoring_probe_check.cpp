#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Rectangular_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"

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
    std::cout << std::endl;
        
    Equilateral_Triangle equiltrian(10);
    Figure* figure4 = &equiltrian;
    figure4->print_info();
    std::cout << "Sides: a = " << equiltrian.get_side_a() << ", b = " << equiltrian.get_side_b() << ", c = " << equiltrian.get_side_c() << std::endl;
    std::cout << "Angles: A = " << equiltrian.get_angle_A() << ", B = " << equiltrian.get_angle_B() << ", C = " << equiltrian.get_angle_C() << std::endl;
    std::cout << std::endl;
    
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
}