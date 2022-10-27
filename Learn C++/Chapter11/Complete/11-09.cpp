#include <iostream>

int main() {
	int value { 7 };
	int *ptr { &value };

	std::cout << ptr << '\n';
	std::cout << ptr + 1 << '\n';
	std::cout << ptr + 2 << '\n';
	std::cout << ptr + 3 << '\n';

	std::cout << '\n';
	short value2 { 7 };
	short *ptr2 { &value2 };

	std::cout << ptr2 << '\n';
	std::cout << ptr2 + 1 << '\n';
	std::cout << ptr2 + 2 << '\n';
	std::cout << ptr2 + 3 << '\n';

	return 0;
}
