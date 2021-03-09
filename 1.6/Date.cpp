#include "Date.h"

void Date::Init(Triad value)
{
	this->date = value;
	Stabilizer();
}
void Date::incYear()
{
	date.SetYear(date.GetYear() + 1);
	YearConverter();
}
void Date::incMonth()
{
	date.SetMonth(date.GetMonth() + 1);
	MonthConverter();
}
void Date::incDay()
{
	date.SetDay(date.GetDay() + 1);
	DayConverter();
}
void Date::Display() const
{
	cout << date.GetYear() + 1 << " Year " << date.GetMonth() + 1 << " Month " << date.GetDay() + 1 << " Day " << endl;
}
void Date::SetYear(int value)
{
	date.SetYear(date.GetYear() + value);
	YearConverter();
}
void Date::YearConverter()
{
	if (date.GetYear() >= 30)
		date.SetYear(date.GetYear() % 30);
}
void Date::SetMonth(int value)
{
	date.SetMonth(date.GetMonth() + value);
	MonthConverter();
}
void Date::MonthConverter()
{
	while (date.GetMonth() >= 12)
	{
		date.SetMonth(date.GetMonth() - 12);
		incYear();
	}
}
void Date::SetDay(int value)
{
	date.SetDay(date.GetDay() + value);
	DayConverter();
}
void Date::DayConverter()
{
	while (date.GetDay() >= 30)
	{
		date.SetDay(date.GetDay() - 30);
		incMonth();
	}
}

void Date::addDay()
{
	int value;
	cout << "Dodatu dniv "; cin >> value;
	date.SetDay(date.GetDay() + value);
	Stabilizer();
}
void Date::Read()
{
	Triad a;
	int y, m, d;
	cout << "Enter number 1: "; cin >> y;
	cout << "Enter number 2: "; cin >> m;
	cout << "Enter number 3: "; cin >> d;
	a.Init(y, m, d);
	Init(a);
}
string Date::toString() const
{
	stringstream sout;
	sout << "number 1: " << date.GetYear() << ", number 2: " << date.GetMonth() << ", number 3: " << date.GetDay() << endl;
	return sout.str();
}
void Date::Stabilizer()
{
	DayConverter();
	MonthConverter();
	YearConverter();
}
void Date::Triad::Init(int y, int m, int d)
{
	year = abs(y);
	month = abs(m);
	day = abs(d);
}
