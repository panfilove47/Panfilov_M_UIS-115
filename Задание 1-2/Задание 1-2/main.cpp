#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	double x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	Rectangle rect(x1, y1, x2, y2);
	cout << "Top left corner: " << "(" << rect.getcoordinate_displayX1() << ";" << rect.getcoordinate_displayY1() << ")" << endl;
	cout << "Bottom right corner: " << "(" << rect.getcoordinate_displayX2() << ";" << rect.getcoordinate_displayY2() << ")" << endl;
	cout << rect.getHeight() << endl;
}