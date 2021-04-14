#include<iostream>
#include"Rectangle.h"
#include <stdexcept>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	Rectangle rect1(1.0, 5.0);
	cout << "Координаты x1 ";
	cout << rect1.get_coordinate_display_x1()<<endl;
	cout << "Координаты x2 ";
	cout << rect1.get_coordinate_display_x2() << endl;
	cout << "Координаты y1 ";
	cout << rect1.get_coordinate_display_y1() << endl;
	cout << "Координаты y2 ";
	cout << rect1.get_coordinate_display_y2() << endl;
	cout << "Высота ";
	cout << rect1.get_height() << endl;
	cout << "Ширина ";
	cout << rect1.get_width() << endl;
	cout << "Площадь ";
	cout << rect1.get_area() << endl;
	rect1.set_moving(10);
	cout << "Перемещенная координата x1 ";
	cout << rect1.get_moving_x1() << endl;
	cout << "Перемещенная координата x2 ";
	cout << rect1.get_moving_x2() << endl;
	cout << "Перемещенная координата y1 ";
	cout << rect1.get_moving_y1() << endl;
	cout << "Перемещенная координата y2 ";
	cout << rect1.get_moving_y2() << endl;
}