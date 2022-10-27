#include <iostream>

int main() {
	int *ptr { }; // null pointer

	int x { 5 };
	ptr = &x;

	std::cout << *ptr;

	if (ptr)
		std::cout << "ptr is non-null\n";
	else
		std::cout << "ptr is null\n";

	int *nullPtr { };
	std::cout << "nullPtr is " << (nullPtr ? "non-null\n" : "null\n");
	return 0;
}
