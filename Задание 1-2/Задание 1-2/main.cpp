#include<iostream>
#include"Rectangle.h"
#include <stdexcept>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	Rectangle rect1(1.0, 5.0);
	cout << "Coordinate x1 ";
	cout << rect1.get_coordinate_x1() << endl;
	cout << "Coordinate x2 ";
	cout << rect1.get_coordinate_x2() << endl;
	cout << "Coordinate y1 ";
	cout << rect1.get_coordinate_y1() << endl;
	cout << "Coordinate y2 ";
	cout << rect1.get_coordinate_y2() << endl;
	cout << "Height ";
	cout << rect1.get_height() << endl;
	cout << "Width ";
	cout << rect1.get_width() << endl;
	cout << "Area ";
	cout << rect1.get_area() << endl;
	rect1.set_moving(10);
	cout << "Moved coordinate x1 ";
	cout << rect1.get_moving_x1() << endl;
	cout << "Moved coordinate x2 ";
	cout << rect1.get_moving_x2() << endl;
	cout << "Moved coordinate y1 ";
	cout << rect1.get_moving_y1() << endl;
	cout << "Moved coordinate y2 ";
	cout << rect1.get_moving_y2() << endl;
}