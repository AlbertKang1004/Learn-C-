#include <iostream>
#include <algorithm>

int main() {
	int array[] {30, 50, 20, 10, 40};

	std::sort(std::begin(array), std::end(array));

	for (int i { 0 } ; i < sizeof(array) / sizeof(array[0]); ++i) {
		std::cout << array[i] << ' ';
	}

	std::cout << '\n';

	return 0;
}
