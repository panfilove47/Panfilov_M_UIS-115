#pragma once
#include "Vehicle.h"
class Bicycle: public Vehicle
{
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Bicycle(double average_speed, string model, int number_of_passengers, double distance);
	/**
	 \brief	Деструктор по умолчанию
	 */
	~Bicycle() = default;
};

