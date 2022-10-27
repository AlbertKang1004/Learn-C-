#include <iostream>

class Date {
private:
	int m_year;
	int m_month;
	int m_day;
public:
	Date(int year, int month, int day);
	void setDate(int year, int month, int day);
	int getYear() {
		return m_year;
	}
	int getMonth() {
		return m_month;
	}
	int getDay() {
		return m_day;
	}
};

Date::Date(int year, int month, int day) {
	setDate(year, month, day);
}

void Date::setDate(int year, int month, int day) {
	m_year = year;
	m_month = month;
	m_day = day;
}

int main() {

	return 0;
}
