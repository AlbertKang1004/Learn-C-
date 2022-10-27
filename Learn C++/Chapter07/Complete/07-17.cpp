#include <iostream>
#include <cassert>
#include <cmath>

//static_assert(sizeof(long) == 8, "long must be 8 bytes");

double cT(double initialHeight, double gravity) {
	assert(gravity > 0.0 && "Gravity cannot be lower than 0");
	if (initialHeight <= 0.0){
		return 0.0;
	}
	return std::sqrt((2.0 * initialHeight) / gravity);
}

int main() {
	std::cout << "Took " << cT(100.0, -9.8) << " second(s)\n";
	return 0;
}
