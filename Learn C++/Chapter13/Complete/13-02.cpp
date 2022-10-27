#include <iostream>

struct DateStruct {
	int year { };
	int month { };
	int day { };
};

class DateClass {
public:
	int m_year { };
	int m_month { };
	int m_day { };

	void print() {
		std::cout << m_year << '/' << m_month << '/' << m_day;
	}
};

void print(const DateStruct &date) {
	std::cout << date.year << '/' << date.month << '/' << date.day;
}

class Employee {
public:
	std::string m_name { };
	int m_id { };
	double m_wage { };

	void print() {
		std::cout << "Name: " << m_name << " ID: " << m_id << " Wage: $"
				<< m_wage << '\n';
	}
};

int main() {
	DateStruct today { 2020, 10, 14 };

	today.day = 16;
	print(today);

	std::cout << '\n';

	DateClass today2 { 2020, 10, 14 };
	today2.m_day = 16;
	today2.print();

	std::cout << '\n';
//
//	Employee alex { "Alex", 1, 25.00 };
//	Employee joe { "Joe", 2, 22.25 };
//
//	alex.print();
//	joe.print();
	return 0;
}
