#include <iostream>

struct Employee {
	int id { };
	int age { };
	double wage { };
};

int main() {
	Employee joe;
	Employee frank;
	joe.age = 32;
	frank.wage = 20000;
	std::cout << joe.age << std::endl;
	std::cout << frank.wage << std::endl;

	return 0;
}
