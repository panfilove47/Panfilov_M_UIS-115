#include "LeapYear.h"
int main() {
	setlocale(LC_ALL, "Russian");
	cout << LeapYear1(11) << endl;
	try {
		cout << LeapYear2(0) << endl;
	}
	catch (int) {
		cout << "ќшибка!«наменатель равен 0, спецификатор throw" << endl;
	}
	try {
		cout << LeapYear3(0) << endl;
	}
	catch (invalid_argument error) {
		cerr << error.what() << endl;
	}
	try {
		cout << LeapYear4(0) << endl;
	}
	catch (MyException) {
		cerr << "ќшибка!«наменатель равен 0, пустой класс" << endl;
	}
	try {
		cout << LeapYear5(0) << endl;
	}
	catch (MyException2 error) {
		cerr << error.message << endl;
	}
	try {
		cout << LeapYear6(0) << endl;
	}
	catch (MyException3 error) {
		cerr << error.what() << endl;
	}
}