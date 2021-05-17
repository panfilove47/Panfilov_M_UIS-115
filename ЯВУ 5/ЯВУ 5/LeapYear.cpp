#include "LeapYear.h"
int LeapYear1(int year)
{
	if (year % 4 != 0 && (year % 100 == 0 || year % 400 != 0))
	{
		cout << "Год не високосный" << endl;
	}
	else
	{
		cout << "Год високосный" << endl;
	}
	return year;
}
int LeapYear2(int year)
{
	if (year > 0)
	{
		if (year % 4 != 0 && (year % 100 == 0 || year % 400 != 0))
		{
			cout << "Год не високосный" << endl;
		}
		else
		{
			cout << "Год високосный" << endl;
		}
	}
	else
	{
		throw 1;
	}
}
	int LeapYear3(int year)
{
	if (year > 0)
	{
		if (year % 4 != 0 && (year % 100 == 0 || year % 400 != 0))
		{
			cout << "Год не високосный" << endl;
		}
		else
		{
			cout << "Год високосный" << endl;
		}
	}
	else
	{
		throw invalid_argument{ "Ошибка! Год меньше нуля, стандартное исключение" };
	}
}
	int LeapYear4(int year)
	{
		if (year > 0)
		{
			if (year % 4 != 0 && (year % 100 == 0 || year % 400 != 0))
			{
				cout << "Год не високосный" << endl;
			}
			else
			{
				cout << "Год високосный" << endl;
			}
		}
		else
		{
			throw MyException();
		}
	}
	int LeapYear5(int year)
	{
		if (year > 0)
		{
			if (year % 4 != 0 && (year % 100 == 0 || year % 400 != 0))
			{
				cout << "Год не високосный" << endl;
			}
			else
			{
				cout << "Год високосный" << endl;
			}
		}
		else
		{
			throw MyException2("Ошибка! Год равен/меньше 0, независимый класс с полями-параметрами функции");
		}
	}
	int LeapYear6(int year)
	{
		if (year > 0)
		{
			if (year % 4 != 0 && (year % 100 == 0 || year % 400 != 0))
			{
				cout << "Год не високосный" << endl;
			}
			else
			{
				cout << "Год високосный" << endl;
			}
		}
		else
		{
			throw MyException3("Ошибка! Год равен/меньше 0, класс наследник");
		}
	}