#include <iostream>

int main() {
	char myName[] { "Alex" }; // fixed array
	std::cout << myName << '\n';

	const char *myName2 { "Alex" };
	std::cout << myName2 << '\n';

	char c {'Q'};
	std::cout << &c;
	return 0;
}
