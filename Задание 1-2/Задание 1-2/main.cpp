#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;
#include "Rectangle.h"
int main()
{
	setlocale(LC_ALL, "ru");
	int x1, y1, x2, y2, z;
	Rectangle EnteringCoordinates;
	cout << "Enter x1" << endl;
	cin >> x1;
	cout << "Enter y1" << endl;
	cin >> y1;
	cout << "Enter x2" << endl;
	cin >> x2;
	cout << "Enter y2" << endl;
	cin >> y2;
	EnteringCoordinates.LeftAngleX = x1;
	EnteringCoordinates.LeftAngleY = y1;
	EnteringCoordinates.RightAngleX = x2;
	EnteringCoordinates.RightAngleY = y2;
	EnteringCoordinates.Emp_show();

	Rectangle Move;
	cout << "Enter the move: " << endl;
	cin >> z;
	Move.LeftAngleX = x1 + z;
	Move.LeftAngleY = y1 + z;
	Move.RightAngleX = x2 + z;
	Move.RightAngleY = y2 + z;
	Move.Pme_show();
	system("Pause");
	return 0;
}