#include <iostream>

struct Employee {
	int id { };
	int age { };
	double wage { };
};

struct Company {
	int numberOfEmployees { };
	Employee CEO { };
};

struct Point3d {
	double x { 0.0 };
	double y { 0.0 };
	double z { 0.0 };
};

void printEmployee(const Employee &employee) {
	std::cout << "ID:   " << employee.id << '\n';
	std::cout << "Age:  " << employee.age << '\n';
	std::cout << "Wage: " << employee.wage << '\n';
}

Point3d getZeroPoint() {
	return {};
}

int main() {
	Employee joe { 14, 32, 24.15 };
	Employee frank { 15, 28, 18.27 };

	printEmployee(joe);

	std::cout << '\n';
	printEmployee(frank);

	std::cout << '\n';
	Company myCompany { 7, { 1, 32, 55000.0 } };
	std::cout << myCompany.CEO.wage;
	std::cout << '\n';

	std::cout << "The size of Employee is " << sizeof(Employee) << '\n';

	return 0;
}
