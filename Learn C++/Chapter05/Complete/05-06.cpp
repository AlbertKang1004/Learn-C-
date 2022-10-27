#include <iostream>
#include <algorithm> // std::max
#include <cmath>	 // std::abs

bool isAlmostEqual(double a, double b, double epsilon);
bool approximatelyEqual(double a, double b, double epsilon);
bool approximatelyEqualAbsRel(double a, double b, double absEpsilon,
		double relEpsilon);

int main() {
	double d1 { 100.0 - 99.99 };
	double d2 { 10.00 - 9.99 };

	if (d1 == d2)
		std::cout << "d1 == d2" << std::endl;
	else if (d1 > d2)
		std::cout << "d1 < d2" << std::endl;
	else if (d1 < d2)
		std::cout << "d1 > d2" << std::endl;

	std::cout << std::boolalpha << isAlmostEqual(d1, d2, 0.0001) << std::endl;
	std::cout << approximatelyEqual(d1, d2, 0.0001) << std::endl;
	return 0;
}

bool isAlmostEqual(double a, double b, double epsilon) {
	// if the distance between a and b is less than epsilon, then a and b are "close enough"
	return std::abs(a - b) <= epsilon;
}

bool approximatelyEqual(double a, double b, double epsilon) {
	return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * epsilon));
}

bool approximatelyEqualAbsRel(double a, double b, double absEpsilon,
		double relEpsilon) {
	double diff { std::abs(a - b) };
	if (diff <= absEpsilon)
		return true;
	return (diff <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}
