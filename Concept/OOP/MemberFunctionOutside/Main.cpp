#include <string>
#include <iostream>
#include <cassert>

class Date
{
private:
	int m_year;
	int m_month;
	int m_day;
public:
	Date(int year, int month, int day);

	void SetDate(int year, int month, int day);

	int getYear() { return m_year; }
	int getMonth() { return m_month; }
	int getDay() { return m_day; }
};

Date::Date(int year, int month, int day)
{
	SetDate(year, month, day);
}

void Date::SetDate(int year, int month, int day)
{
	m_month = month;
	m_year = year;
	m_day = day;
}
