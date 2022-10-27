#include <iostream>

int main() {
	int *ptr { new int };
	*ptr = 7;
	std::cout << *ptr << '\n';

	int *ptr1 { new int { 5 } };
	int *ptr2 { new int(6) };
	std::cout << ptr1 << '\n';
	std::cout << ptr2 << '\n';
	delete ptr;
	ptr = nullptr;
	if (!ptr)
		ptr = new int {2};
	std::cout << *ptr << '\n';

	return 0;
}
