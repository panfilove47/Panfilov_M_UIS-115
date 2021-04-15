#include<iostream>
#include"Pair.h"
using namespace std;
Pair::Pair() 
{
	a = 0.0;
	b = 0.0;
}
Pair::Pair(double a, double b)
	{
		this->a = a;
		this->b = b;
	}
double Pair::get_a() { return a; }
double Pair::get_b() { return b; }
double Pair::get_composition() { return a * b; }
void Pair::set_changing_numbers(double change_a, double change_b) 
{
	a = change_a;
	b = change_b;
}
double Pair::get_changed_number_a() { return a; }
double Pair::get_changed_number_b() { return b; }

Rectangle::Rectangle(double width, double height)
{
	if (width > 0 && height > 0) 
	{
		a = width;
		b = height;
	}
	else
	{
		throw invalid_argument{ "Нельзя" };
	}
}
double Rectangle::get_area() { return get_composition(); }
double Rectangle::get_perimeter()
{
	return (get_b() * 2) + (get_a() * 2);
}
