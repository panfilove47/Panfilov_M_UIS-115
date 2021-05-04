#pragma once
#include "Car.h"
using namespace std;
class Truck : public Car
{
private:
	double carrying;
	/**
	 \brief	Принимает грузоподъемность
	 */
	void set_carrying(double carrying);
public:
	/**
	 \brief	Конструктор с параметрами
	*/
	explicit Truck(double average_speed, string model, int number_of_passengers, double distance, double fuel, double carrying);
	/**
	 \brief	Деструктор по умолчанию
	 */
	~Truck() = default;

	/**
	 \brief	Возвращает грузоподъемность
	 \returns carrying.
	 */
	double get_carrying();
};

