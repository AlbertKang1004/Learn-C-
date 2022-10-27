#include <iostream>
#include <bitset>

int main() {
	std::cout << 5 << '\n';  // default is int
	std::cout << 5u << '\n'; // type unsigned int
	std::cout << 5l << '\n'; // type long

	std::cout << 5.0 << '\n';
	std::cout << 5.0f << '\n'; // type float
	std::cout << 5.0l << '\n'; // type long double

	double avogadro { 6.02e23 };
	double electron { 1.6e-19 };
	std::cout << avogadro << '\n';
	std::cout << electron << '\n';

	int x { 012 }; // 12 octal = 10 decimal
	int y { 0xF }; // F hexademical = 15 decimal
	int z { 0b0110 }; // 0110 binary = 6 decimal
	std::cout << x << '\n';
	std::cout << y << '\n';
	std::cout << z << '\n';

	std::cout << std::oct << x << '\n';
	std::cout << std::hex << y << '\n';
	std::cout << std::bitset<4> { 0b1010 } << '\n';

	return 0;
}
