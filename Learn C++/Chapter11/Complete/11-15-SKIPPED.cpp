#include <iostream>

int main() {
	int value { 5 };
	int *ptr { &value };
	std::cout << *ptr << '\n';

	int **ptrptr { &ptr };
	std::cout << **ptrptr << '\n';
	return 0;

	// Two-dimensional dynamically allocated arrays
	int x { 7 };
	auto array { new int[x][5] };


}
