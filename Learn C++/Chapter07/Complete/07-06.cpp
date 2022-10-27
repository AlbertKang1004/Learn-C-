#include <iostream>
#include <cmath>

int main() {
	double x { };
	tryAgain: std::cout << "Enter a non-negative number: ";
	std::cin >> x;

	if (x < 0.0)
		goto tryAgain;

	std::cout << "The square root of " << x << " is " << std::sqrt(x) << '\n';

	end: ; // statement labels must be associated with a statement

	return 0;
}
