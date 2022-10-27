#include <iostream>

int main() {
	bool b1 { true };
	bool b2 { false };
	bool b3 { }; // default is false

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;

	std::cout << std::boolalpha << std::endl;

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	std::cout << std::noboolalpha << std::endl;

	std::cout << b3 << std::endl;
	return 0;
}
