#pragma once
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle 
{
protected:
	double fuel;
	void set_fuel(double fuel);
public:
	/**
	 \brief	Конструктор по умолчанию
	*/
	Car();
	/**
	 \brief	Конструктор с параметрами
	*/
	explicit Car(double average_speed, string model, int number_of_passengers, double distance, double fuel);
	/**
	 \brief	Деструктор по умолчанию
	*/
	~Car() = default;
	/**
	 \brief	Возвращает количество топлива в литрах
	 \returns	fuel
	 */
	double get_fuel();
	/**
	 \brief	Устанавливает новое количество топлива
	 */
	void set_new_fuel(double fuel);
	/**
	 \brief	Возвращает расход топлива на заданной дистанции при q - расход топлива на 100 км
	 \returns	q * distance / 100
	 */
	double get_fuel_consumption(double q);
};

