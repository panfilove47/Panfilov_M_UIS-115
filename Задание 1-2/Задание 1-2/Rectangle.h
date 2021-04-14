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

public:
    explicit Rectangle(double height, double width);
    /**
     \brief	����������� ����������� ������ � ������.
     */
    explicit Rectangle(double x1, double y1, double x2, double y2);
    /**
     \brief	����������� ����������� ���������� ������ �������� ���� � ������� ������� ����.
     */
    Rectangle(const  Rectangle&) = default;
    /**
     \brief	����������� ����������� �� ���������.
     */
    Rectangle& operator=(const  Rectangle&) = default;
    /**
     \brief	����������� ������������ �� ���������.
     */
    double get_coordinate_display_x1();
    /**
     \brief	����� ���������� x1 �� �����
     \returns	���������� ���������� x1.
     */
    double get_coordinate_display_x2();
    /**
    \brief	����� ���������� x2 �� �����
    \returns	���������� ���������� x2.
    */
    double get_coordinate_display_y1();
    /**
    \brief	����� ���������� y1 �� �����
    \returns	���������� ���������� y1.
    */
    double get_coordinate_display_y2();
    /**
    \brief	����� ���������� y2 �� �����
    \returns	���������� ���������� y2.
    */
    double get_height() const;
    /**
    \brief	����� ���������� ������ �� �����
    \returns	���������� ���������� ���������� height.
    */
    double get_width() const;
    /**
    \brief	����� ���������� ������ �� �����
    \returns	���������� ���������� width.
    */
    double get_area() const;
    /**
    \brief	����� ������� ��������������
    \returns	���������� ������������ height � width.
    */
    void set_moving(double move);
    /**
    \brief	���� ����������� ��������������.
    */
    double get_moving_x1();
    /**
    \brief	����� ������������ ���������� x1 �� �����
    \returns	���������� ������������ ���������� x1.
    */
    double get_moving_x2();
    /**
    \brief	����� ������������ ���������� x2 �� �����
    \returns	���������� ������������ ���������� x2.
    */
    double get_moving_y1();
    /**
    \brief	����� ������������ ���������� y1 �� �����
    \returns	���������� ������������ ���������� y1.
    */
    double get_moving_y2();
    /**
    \brief	����� ������������ ���������� y2 �� �����
    \returns	���������� ������������ ���������� y2.
    */
    ~Rectangle() = default;
};

