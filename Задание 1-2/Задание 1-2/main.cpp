#include <iostream>
#include <string>
#include <math.h>
using namespace std;
#include "Employee.h"
int main()
{
	setlocale(LC_ALL, "ru");
	int x1, y1, x2, y2, z;
	Employee knigaO;
	cout << "Enter x1" << endl;
	cin >> x1;
	cout << "Enter y1" << endl;
	cin >> y1;
	cout << "Enter x2" << endl;
	cin >> x2;
	cout << "Enter y2" << endl;
	cin >> y2;
	knigaO.LeftAngleX = x1;
	knigaO.LeftAngleY = y1;
	knigaO.RightAngleX = x2;
	knigaO.RightAngleY = y2;
	knigaO.Emp_show();

	Employee Pr2;
	cout << "Enter the move: " << endl;
	cin >> z;
	Pr2.LeftAngleX = x1 + z;
	Pr2.LeftAngleY = y1 + z;
	Pr2.RightAngleX = x2 + z;
	Pr2.RightAngleY = y2 + z;
	Pr2.Pme_show();
	system("Pause");
	return 0;
}