#include <iostream>

int main() {
	const int x { 5 };
	const int &ref1 { x };

	std::cout << ref1 << '\n';
	// ref1 = 6; // non-modifiable

	int y = 6;
	const int &ref2 { y };
	y = 7;

	std::cout << ref2 << '\n'; // modifiable through original variable

	return 0;
}
