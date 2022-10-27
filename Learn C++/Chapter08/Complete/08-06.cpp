#include <iostream>

int main() {
	using distance_t = double;

	distance_t milesToDestination { 3.4 };
	std::cout << milesToDestination << '\n';

	using miles_t = long;
	using speed_t = long;

	miles_t distance { 5 };
	speed_t mhz { 3200 };
	distance = mhz;
	return 0;
}
