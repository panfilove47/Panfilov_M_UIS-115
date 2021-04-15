#pragma once
#include<iostream>
using namespace std;

class Pair 
{
protected:
	double a; 
	double b;
public:
	Pair(); 

	/**
	 \brief	Конструктор по умолчанию
	 */

	Pair(double a, double b);
	/**
	 \brief	Конструктор принимающий числа a и b
	 */
	explicit Pair(const  Pair&) = default;
	/**
	 \brief	Конструктор копирования
	 */
	Pair& operator=(const  Pair&) = default;
	/**
	 \brief	Конструктор присвоения
	 */
	double get_a();
	/**

	 \brief	Возвращает a
	 \returns	a.
	 */

	double get_b();
	/**

	 \brief	Возвращает b
	 \returns	b.
	 */
	double get_composition();
	/**

	 \brief	Возвращает произведение a и b
	 \returns	a * b.
	 */
	void set_changing_numbers(double change_a, double change_b);
	/**

	 \brief	Возвращает изменение чисел a и b
	 */
	double get_changed_number_a();
	/**

	 \brief	Возвращает изменненный a
	 \returns	a.
	 */
	double get_changed_number_b();
	/**

	 \brief	Возвращает изменненный b
	 \returns	b.
	 */
	~Pair() = default;
	/**
	 \brief	Деструктор по умолчанию
	 */
};
class Rectangle : public Pair
{

public:
	explicit Rectangle(double width, double height);
	/**
	 \brief	Конструктор принимающий числа длину и ширину
	 */
	Rectangle(const  Rectangle&) = default;
	/**
	 \brief	Конструктор копирования
	 */
	Rectangle& operator=(const  Rectangle&) = default;
	/**
	 \brief	Конструктор присвоения
	 */
	double get_area();
	/**

	 \brief	Возвращает площадь
	 \returns	get_composition().
	 */
	double get_perimeter();
	/**

	 \brief	Возвращает периметр
	 \returns	(get_b() * 2) + (get_a() * 2).
	 */
	~Rectangle() = default;
	/**
	\brief	Деструктор по умолчанию
	*/
};
