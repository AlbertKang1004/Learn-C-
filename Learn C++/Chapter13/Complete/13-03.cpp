#include <iostream>

class DateClass {
	int m_year {};
	int m_month {};
	int m_day {};

public:
	void setDate(int year, int month, int day) {
		m_year = year;
		m_month = month;
		m_day = day;
	}

	void print() {
		std::cout << m_year << '/' << m_month << '/' << m_day;
	}

	void copyFrom(const DateClass& d) {
		m_year = d.m_year;
		m_month = d.m_month;
		m_day = d.m_day;
	}
};

int main() {
	DateClass date;
	date.setDate(2020, 10, 14);
	date.print();
	std::cout << '\n';

	return 0;
}
