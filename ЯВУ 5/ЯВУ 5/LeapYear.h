#pragma once
#include<iostream>
#include<exception>
#include "MyException.h"
#include "MyException2.h"
#include "MyException3.h"
/**
* \brief ‘ункци¤ провер¤юща¤ год на високосность
* \param year год
* \return год
*/
int LeapYear1(int year);

/**
* \brief ‘ункци¤ провер¤юща¤ год на високосность, спецификатор throw()
* \param year год
* \return год
*/
int LeapYear2(int year);

/**
* \brief ‘ункци¤ провер¤юща¤ год на високосность, с конкретной спецификацией с подход¤щим стандартным исключением
* \param year год
* \return год
*/
int LeapYear3(int year);

/**
* \brief ‘ункци¤ провер¤юща¤ год на високосность, со спецификацией с собственным реализованным исключением. (исключение как пустой класс)
* \param year год
* \return год
*/
int LeapYear4(int year);

/**
* \brief ‘ункци¤ провер¤юща¤ год на високосность, со спецификацией с собственным реализованным исключением. (исключение как независимый класс с пол¤ми-параметрами функции)
* \param year год
* \return год
*/
int LeapYear5(int year);

/**
* \brief ‘ункци¤ провер¤юща¤ год на високосность, со спецификацией с собственным реализованным исключением. (исключение как наследник от стандартного исключени¤ с пол¤ми)
* \param year год
* \return год
*/
int LeapYear6(int year);