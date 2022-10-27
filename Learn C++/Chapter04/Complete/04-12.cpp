#include <iostream>

void print(int x) {
	std::cout << x << '\n';
}
int main() {
	print(static_cast<int>(5.5));

	char ch { 97 };
	std::cout << ch << " has a value of " << static_cast<int>(ch) << '\n';

	unsigned int u { 5u };
	int s { static_cast<int>(u) };

	std::cout << s;
	return 0;
}
