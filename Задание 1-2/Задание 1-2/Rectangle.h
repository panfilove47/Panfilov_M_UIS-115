#pragma once
#include <iostream> 
#include <stdexcept>
using namespace std;

class Rectangle {
private:
    double x1;
    double y1;
    double x2;
    double y2;
    double width;
    double height;
    /**
     \brief	сеттер проверки условий по координатам.
     */
    void set_coordinates(double x1, double y1, double x2, double y2);
    /**
     \brief	сеттер проверки условий по сторонам.
     */
    void set_sides(double height, double width);
public:
    /**
     \brief	Конструктор принимающий высоту и ширину.
     */
    explicit Rectangle(double height, double width);
    /**
     \brief	Конструктор принимающий координаты лувого верхнего угла и правого нижнего угла.
     */
    explicit Rectangle(double x1, double y1, double x2, double y2);
    /**
     \brief	Деструктор по умолчанию.
     */
    ~Rectangle() = default;
    /**
     \brief	Конструктор копирования по умолчанию.
     */
    Rectangle(const  Rectangle&) = default;
    /**
     \brief	Конструктор присваивания по умолчанию.
     */
    Rectangle& operator=(const  Rectangle&) = default;
    /**
     \brief	Вывод координаты x1 на экран
     \returns	Возвращает координату x1.
     */
    double get_coordinate_x1();
    /**
    \brief	Вывод координаты x2 на экран
    \returns	Возвращает координату x2.
    */
    double get_coordinate_x2();
    /**
    \brief	Вывод координаты y1 на экран
    \returns	Возвращает координату y1.
    */
    double get_coordinate_y1();
    /**
    \brief	Вывод координаты y2 на экран
    \returns	Возвращает координату y2.
    */
    double get_coordinate_y2();
    /**
    \brief	Вывод координаты высоты на экран
    \returns	Возвращает координату переменную height.
    */
    double get_height() const;
    /**
    \brief	Вывод координаты ширины на экран
    \returns	Возвращает переменную width.
    */
    double get_width() const;
    /**
    \brief	Вывод площади прямоугольника
    \returns	Возвращает произведение height и width.
    */
    double get_area() const;
    /**
    \brief	Ввод перемещения прямоугольника.
    */
    void set_moving(double move);
    /**
    \brief	Вывод перемещённой координаты x1 на экран
    \returns	Возвращает перемещённую координату x1.
    */
    double get_moving_x1();
    /**
    \brief	Вывод перемещённой координаты x2 на экран
    \returns	Возвращает перемещённую координату x2.
    */
    double get_moving_x2();
    /**
    \brief	Вывод перемещённой координаты y1 на экран
    \returns	Возвращает перемещённую координату y1.
    */
    double get_moving_y1();
    /**
    \brief	Вывод перемещённой координаты y2 на экран
    \returns	Возвращает перемещённую координату y2.
    */
    double get_moving_y2();
};

