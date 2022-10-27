#include <iostream>

void printDouble(double d) {
	std::cout << d << std::endl;
}

void printInt(int x) {
	std::cout << x << std::endl;
}

int main() {
	printDouble(5.0);
	printDouble(4.0f); // float -> double

	printInt(2);

	short s { 3 };
	printInt(s); // short -> int

	printInt('a'); // char -> int
	printInt(true); // bool -> int

	return 0;
}
