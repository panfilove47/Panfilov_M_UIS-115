#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
protected:
	double average_speed;
	string model;
	int number_of_passengers;
	double distance;

	/**
	 \brief	Принимает среднюю скорость
	 */
	void set_average_speed(double average_speed);
	/**
	 \brief	Принимает количество пассажиров
	 */
	void set_number_of_passengers(int number_of_passengers);
	/**
	 \brief	Принимает дистанцию в километрах
	 */
	void set_distance(double distance);
public:
	/**
	 \brief	Конструктор по умолчанию
	 */
	Vehicle();
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Vehicle(double average_speed, string model, int number_of_passengers, double distance);
	/**
	 \brief	Деструктор по умолчанию
	 */
	~Vehicle() = default;
	/**
	 \brief	Возвращает время движения
	 \returns	distance / average_speed.
	 */
	double get_travel_time();
	/**
	 \brief	Возвращает среднюю скорость
	 \returns average speed.
	 */
	double get_average_speed();
	/**
	 \brief	Возвращает модель средства передвижения
	 \returns model.
	 */
	string get_model();
	/**
	 \brief	Возвращает количество пассажиров
	 \returns number of passengers.
	 */
	double get_number_of_passengers();
	/**
	 \brief	Возвращает расстояние в километрах
	 \returns distance.
	 */
	double get_distance();
	/**
	 \brief	Принимает новое значение расстояния
	 */
	void set_new_distance(double distance);
};

