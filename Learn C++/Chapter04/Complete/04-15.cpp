#include <iostream>

void printInt(const int x) {
	std::cout << x << '\n';
}

int main() {
	constexpr double gravity { 9.8 }; // preferred
	int constexpr sidesSquare { 4 }; // not preferred
	// both are compile-time constants

	std::cout << "Enter an integer: ";
	int x { };
	std::cin >> x;

	const int y = x; // run-time constants
//	constexpr int z = x; // will cause an error

	std::cout << gravity << '\n';
	std::cout << sidesSquare << '\n';
	std::cout << y << '\n';

	printInt(5); // the input will not change inside the function
	return 0;
}
