#pragma once
#include <iostream>
#include <math.h>
using namespace std;


class Rectangle
{
public:
	Rectangle(); //Объявление конструктора
	~Rectangle(); //Объявление деструктора
	void Emp_show(void);
	void Pme_show(void);
	int LeftAngleX;
	int LeftAngleY;
	int RightAngleX;
	int RightAngleY;
	int dlina;
	int shirina;
	int S;
private:
};
//Инициализация конструктора
Rectangle::Rectangle()
{
}
Rectangle::~Rectangle()
{
}
void Rectangle::Emp_show(void)
{
	setlocale(0, "");
	cout << "upper-left corner by x: " << LeftAngleX << endl;
	cout << "upper-left corner by y: " << LeftAngleY << endl;
	cout << "lower-right corner by x: " << RightAngleX << endl;
	cout << "lower-right corner by y: " << RightAngleY << endl;
	dlina = LeftAngleX - RightAngleX;
	dlina = abs(dlina);
	shirina = LeftAngleY - RightAngleY;
	shirina = abs(shirina);
	S = dlina * shirina;
	cout << "Length : " << dlina << endl;
	cout << "Width : " << shirina << endl;
	cout << "Area: " << S << endl;
}
void Rectangle::Pme_show(void)
{
	dlina = LeftAngleX - RightAngleX;
	dlina = abs(dlina);
	shirina = LeftAngleY - RightAngleY;
	shirina = abs(shirina);
	S = dlina * shirina;
	cout << "upper-left corner by x: " << LeftAngleX << endl;
	cout << "upper-left corner by y: " << LeftAngleY << endl;
	cout << "lower-right corner by x: " << RightAngleX << endl;
	cout << "lower-right corner by y: " << RightAngleY << endl;
	cout << "Length: " << dlina << endl;
	cout << "Width: " << shirina << endl;
	cout << "Area: " << S << endl;
}


