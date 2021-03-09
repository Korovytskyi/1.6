#include "Date.h"
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Date a;
	a.Read();
	a.Display();
	a.incDay();
	a.addDay();
	a.Display();
	cout << a.toString();
	Date::Triad date;
	date.incMonth();
	date.GetYear();
}