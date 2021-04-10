#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x1, x2, y1, y2, move;
	cout << "Enter the x1 coordinate: " << endl;
	cin >> x1;
	cout << "Enter the y1 coordinate: " << endl;
	cin >> y1;
	cout << "Enter the x2 coordinate: " << endl;
	cin >> x2;
	cout << "Enter the y2 coordinate: " << endl;
	cin >> y2;
	Rectangle rect(x1, y1, x2, y2);
	cout << "Top left corner: " << "(" << rect.get_coordinate_display_x1() << " ; " << rect.get_coordinate_display_y1() << ")" << endl;
	cout << "Bottom right corner: " << "(" << rect.get_coordinate_display_x2() << " ; " << rect.get_coordinate_display_y2() << ")" << endl;
	cout << "Height = " << rect.get_height() << endl;
	cout << "Width = " << rect.get_width() << endl;
	cout << "Area = " << rect.get_area() << endl;

	cout << "Enter movement: ";
	cin >> move;
	rect.set_moving(move);
	cout << "Moved top-left coordinates:" << endl << "(" << rect.get_x1() << " ; " << rect.get_y1() << ")" << endl;
	cout << "Moved bottom-right coordinates:" << endl << "(" << rect.get_x2() << " ; " << rect.get_y2() << ")" << endl;
}