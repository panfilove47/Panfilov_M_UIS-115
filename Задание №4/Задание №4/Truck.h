#pragma once
#include "Car.h"
using namespace std;
class Truck : public Car
{
private:
	double carrying;
	/**
	 \brief	��������� ����������������
	 */
	void set_carrying(double carrying);
public:
	/**
	 \brief	����������� � �����������
	*/
	explicit Truck(double average_speed, string model, int number_of_passengers, double distance, double fuel, double carrying);
	/**
	 \brief	���������� �� ���������
	 */
	~Truck() = default;

	/**
	 \brief	���������� ����������������
	 \returns carrying.
	 */
	double get_carrying();
};

