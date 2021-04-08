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
        y1 = a_y1;
        x2 = a_x2;
        y2 = a_y2;
    }
    double getcoordinate_displayX1()
    {
        return x1;
    }
    double getcoordinate_displayX2()
    {
        return x2;
    }
    double getcoordinate_displayY1()
    {
        return y1;
    }
    double getcoordinate_displayY2()
    {
        return y2;
    }

    double getHeight() const
    {
        return abs(y1 - y2);
    }

    double getWidth() const
    {
        return abs(x1 - x2);
    }

    double getArea() const
    {
        return (abs(x1 - x2)) * (abs(y1 - y2));
    }
    double getMoving(double moveX, double moveY)
    {
        x1 = x1 + moveX;
        x2 = x2 + moveX;
        y1 = y1 + moveY;
        y2 = y2 + moveY;
        return x1, x2, y1, y2;
    }
    ~Rectangle() {};
};

