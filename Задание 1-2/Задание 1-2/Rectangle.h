#pragma once
#include <iostream> 
using namespace std;

class Rectangle {
private:
    double x1;
    double y1;
    double x2;
    double y2;

public:
    Rectangle()
    {
        x1 = 0.0;
        y1 = 0.0;
        x2 = 0.0;
        y2 = 0.0;
    }
    Rectangle(double a_x1, double a_y1, double a_x2, double a_y2)
    {
        x1 = a_x1;
        x2 = a_x2;
        y1 = a_y1;
        y2 = a_y2;
    }
    double get_coordinate_display_x1()
    {
        return x1;
    }
    double get_coordinate_display_x2()
    {
        return x2;
    }
    double get_coordinate_display_y1()
    {
        return y1;
    }
    double get_coordinate_display_y2()
    {
        return y2;
    }

    double get_height() const
    {
        return abs(y1 - y2);
    }

    double get_width() const
    {
        return abs(x1 - x2);
    }

    double get_area() const
    {
        return (abs(x1 - x2)) * (abs(y1 - y2));
    }
    void set_moving(double move)
    {
        x1 += move;
        x2 += move;
        y1 += move;
        y2 += move;
    }
    double get_x1() 
    {
        return x1;
    }
    double get_x2()
    {
        return x2;
    }
    double get_y1()
    {
        return y1;
    }
    double get_y2()
    {
        return y2;
    }
    ~Rectangle() {};
};

