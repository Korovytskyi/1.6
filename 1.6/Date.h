#pragma once
#include <string>
#include <sstream>
#include <iostream>



using namespace std;

class Date
{
public:
	class Triad
	{
	private:
		int year;
		int month;
		int day;
	public:
		void Init(int y, int m, int d);
		void SetYear(int value) { year = abs(value); }
		void SetMonth(int value) { month = abs(value); }
		void SetDay(int value) { day = abs(value); }
		void incYear() { ++year; }
		void incMonth() { ++month; }
		void incDay() { ++day; }
		int GetYear() const { return year; }
		int GetMonth() const { return month; }
		int GetDay() const { return day; }

	};
private:
	Triad date;
public:
	void Init(Triad value);
	void Read();
	void incYear();
	void incMonth();
	void incDay();
	void Display() const;
	void YearConverter();
	void MonthConverter();
	void DayConverter();
	void addDay();
	void SetYear(int value);
	void SetMonth(int value);
	void SetDay(int value);
	int GetYear() const { return date.GetYear(); }
	int GetMonth() const { return date.GetMonth(); }
	int GetDay() const { return date.GetDay(); }
	void Stabilizer();
	string toString() const;
};

