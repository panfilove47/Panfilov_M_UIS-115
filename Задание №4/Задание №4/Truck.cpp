#include "Truck.h"
using namespace std;
void Truck::set_carrying(double carrying)
{
	if (carrying > 0 && carrying <= 15000)
	{
		this->carrying = carrying;
	}
	else
	{
		throw invalid_argument("Неправильная грузоподъемность");
	}
}
Truck::Truck(double average_speed, string model, int number_of_passengers, double distance, double fuel, double carrying)
{
	set_average_speed(average_speed);
	this->model = model;
	set_number_of_passengers(number_of_passengers);
	set_distance(distance);
	set_fuel(fuel);
	set_carrying(carrying);
}
double Truck::get_carrying()
{
	return carrying;
}