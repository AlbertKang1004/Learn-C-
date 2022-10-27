#include <iostream>

int main() {
	char x { 'i' };
	char &ref { x };
	std::cout << x << '\n';
	std::cout << ref << '\n';

	int y { 5 };
	std::cout << y << '\n';
	std::cout << &y << '\n';

//	int *ptr;
//	int *ptr2 { };
//	int *ptr3 { &y };

	char *chPtr{};
	int* iPtr{};
	long double* ldPtr{};

	std::cout << sizeof(chPtr) << '\n';
	std::cout << sizeof(iPtr) << '\n';
	std::cout << sizeof(ldPtr) << '\n';

	return 0;
}
