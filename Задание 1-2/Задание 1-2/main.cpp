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
	cout << "Top left corner: " << "(" << rect.getcoordinate_displayX1() << ";" << rect.getcoordinate_displayY1() << ")" << endl;
	cout << "Bottom right corner: " << "(" << rect.getcoordinate_displayX2() << ";" << rect.getcoordinate_displayY2() << ")" << endl;
	cout << "Height = " << rect.getHeight() << endl;
	cout << "Width = " << rect.getWidth() << endl;
	cout << "Area = " << rect.getArea() << endl;

	cout << "Enter movement: ";
	cin >> move;
	cout << "Moved top-left coordinates: " << "(" << rect.getmovingX1(move) << " ; " << rect.getmovingY1(move) << ")" << endl;
	cout << "Moved coordinates of the lower right corner: " << "(" << rect.getmovingX2(move) << " ; " << rect.getmovingY2(move) << ")" << endl;
}