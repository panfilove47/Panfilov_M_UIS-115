#pragma once
#include "Pair.h"
using namespace std;
class Rectangle : public Pair
{
private:
	/**
	 \brief	������ ����������� ����� ������ � ����������� �� �� ���������������
	 */
	void set_sides(double a, double b);
public:
	/**
	 \brief	����������� ����������� ����� ����� � ������
	 */
	explicit Rectangle(double width, double height);
	/**
	\brief	���������� �� ���������
	*/
	~Rectangle() = default;
	/**
	 \brief	����������� �����������
	 */
	Rectangle(const  Rectangle&) = default;
	/**
	 \brief	����������� ����������
	 */
	Rectangle& operator=(const  Rectangle&) = default;
	/**
	 \brief	���������� �������
	 \returns	get_composition().
	 */
	double get_area();
	/**
	 \brief	���������� ��������
	 \returns	(get_b() * 2) + (get_a() * 2).
	 */
	double get_perimeter();
};