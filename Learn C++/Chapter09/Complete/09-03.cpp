#include <iostream>

int main() {
	int x { 5 };
	int &ref { x };
	int &ref2 { ref }; // reference bound to x
	std::cout << x << '\n' << ref << '\n';

	x = 6;
	std::cout << x << '\n' << ref << '\n';

	ref = 7;
	std::cout << x << '\n' << ref << '\n';
	return 0;
}
