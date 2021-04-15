#include <iostream>
#include<stdexcept>
#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle(double height, double width) 
{
    if (height > 0 && width > 0)
    {
        this->width = width;
        this->height = height;
        this->x1 = 0.0;
        this->y1 = 0.0 + height;
        this->x2 = 0.0 + width;
        this->y2 = 0.0;
    }
    else
    {
        throw invalid_argument{ "Длина или ширина не могут быть отрицательны" };
    }
}
Rectangle::Rectangle(double x1, double y1, double x2, double y2)
{

    if (x1 != x2 && y1 != y2 && x2 > x1 && y1 > y2)
    {
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
        this->height = abs(y1 - y2);
        this->width = abs(x2 - x1);
    }
    else
    {
        throw invalid_argument{ "Введите другие значения x и y" };
    }
}
double Rectangle::get_coordinate_display_x1() { return x1; }
double Rectangle::get_coordinate_display_x2() { return x2; }
double Rectangle::get_coordinate_display_y1() { return y1; }
double Rectangle::get_coordinate_display_y2() { return y2; }
double Rectangle::get_height()const { return height; }
double Rectangle::get_width()const { return width; }
double Rectangle::get_area()const { return height * width; }
void Rectangle::set_moving(double move)
{
	x1 += move;
	x2 += move;
	y1 += move;
	y2 += move;
}
double Rectangle::get_moving_x1() { return x1; }
double Rectangle::get_moving_x2() { return x2; }
double Rectangle::get_moving_y1() { return y1; }
double Rectangle::get_moving_y2() { return y2; }