#include <iostream>
#include <iomanip>

int main() {
	float f = { 0.3425f };
	double d = { 3.141251413 };
	long double ld = { 79999087.23262452098502 };

	std::cout << std::setprecision(16);
	std::cout << f << std::endl;
	std::cout << d << std::endl;
	std::cout << ld << std::endl;

	std::cout << std::endl;

	std::cout << sizeof(f) << std::endl;
	std::cout << sizeof(d) << std::endl;
	std::cout << sizeof(ld) << std::endl;

	std::cout << 5.0/0.0 << std::endl;
	return 0;
}
