#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x1, x2, y1, y2, move;
	bool unequal_coordinates = false;
	while (unequal_coordinates == false) 
	{
		cout << "Enter the x1 coordinate: " << endl;
		cin >> x1;
		cout << "Enter the y1 coordinate: " << endl;
		cin >> y1;
		cout << "Enter the x2 coordinate: " << endl;
		cin >> x2;
		cout << "Enter the y2 coordinate: " << endl;
		cin >> y2;
		cout << endl << endl;
		if (x1 != x2 && y1 != y2) 
		{
			Rectangle rect(x1, y1, x2, y2);
			cout << "Top left corner: " << "(" << rect.get_coordinate_display_x1() << " ; " << rect.get_coordinate_display_y1() << ")" << endl;
			cout << "Bottom right corner: " << "(" << rect.get_coordinate_display_x2() << " ; " << rect.get_coordinate_display_y2() << ")" << endl;
			cout << "Height = " << rect.get_height() << endl;
			cout << "Width = " << rect.get_width() << endl;
			cout << "Area = " << rect.get_area() << endl << endl;

			cout << "Do you want to move the rectangle?" << endl << "1 - YES" << endl << "0 - NO" << endl;
			bool mooving = false;
			bool matching_numbers = false;
			int choise;
			while (matching_numbers == false)
			{
				cout << "Enter number: " << endl;
				cin >> choise;
				if (choise == 1 || choise == 0)
				{
					mooving = choise;
					matching_numbers = true;
				}
				else
				{
					cout << "You entered the wrong number" << endl;
				}
				cout << endl;

			}
			if (mooving)
			{
				cout << "Enter movement: ";
				cin >> move;
				rect.set_moving(move);
				cout << "Moved top-left coordinates:" << endl << "(" << rect.get_x1() << " ; " << rect.get_y1() << ")" << endl;
				cout << "Moved bottom-right coordinates:" << endl << "(" << rect.get_x2() << " ; " << rect.get_y2() << ")" << endl;
			}
			else
			{
				cout << "You haven't moved the rectangle" << endl;
			}
			unequal_coordinates = true;
		}
		else
		{
			cout << "Coordinates must be different enter different coordinates" << endl;
		}
	}
	return 0;
}