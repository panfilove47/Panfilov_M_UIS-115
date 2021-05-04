#include <iostream>
#include "Vehicle.h"
using namespace std;

void Vehicle::set_average_speed(double average_speed)
{
	if (average_speed > 0)
	{
		this->average_speed = average_speed;
	}
	else
	{
		throw invalid_argument("Скорость должна быть положительной");
	}
}
void Vehicle::set_number_of_passengers(int number_of_passengers)
{
	if (number_of_passengers > 0 && number_of_passengers < 6)
	{
		this->number_of_passengers = number_of_passengers;
	}
	else
	{
		throw invalid_argument("Вы ввели неправильное колличество пассажиров");
	}
}
void Vehicle::set_distance(double distance)
{
	if (distance > 0)
	{
		this->distance = distance;
	}
	else
	{
		throw invalid_argument("Расстояние должно быть больше нуля");
	}
}
Vehicle::Vehicle()
{
	{
		average_speed = 0;
		model = "None";
		number_of_passengers = 1;
	}
}
Vehicle::Vehicle(double average_speed, string model, int number_of_passengers, double distance)
{
	set_average_speed(average_speed);
	this->model = model;
	set_number_of_passengers(number_of_passengers);
	set_distance(distance);
}
double Vehicle::get_travel_time()
{
	return distance / average_speed;
}
double Vehicle::get_average_speed()
{
	return average_speed;
}
double Vehicle::get_number_of_passengers()
{
	return number_of_passengers;
}
double Vehicle::get_distance()
{
	return distance;
}
string Vehicle::get_model()
{
	return model;
}
void Vehicle::set_new_distance(double distance)
{
	set_distance(distance);
}