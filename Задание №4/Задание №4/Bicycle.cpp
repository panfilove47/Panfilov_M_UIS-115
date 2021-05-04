#include <iostream>
#include "Bicycle.h";
using namespace std;
Bicycle::Bicycle(double average_speed, string model, int number_of_passengers, double distance)
{
	set_average_speed(average_speed);
	this->model = model;
	set_number_of_passengers(number_of_passengers);
	set_distance(distance);
}