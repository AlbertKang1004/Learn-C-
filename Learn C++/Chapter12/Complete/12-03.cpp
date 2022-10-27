#include <iostream>
#include <vector>

int main() {
	std::vector array { 0, 1, 2 };

	for (auto element : array) {
		std::cout << element << ' ';
	}
	std::cout << '\n';

	array.resize(5);

	std::cout << "The length is: " << array.size() << '\n';
	std::cout << "The capacity is: " << array.capacity() << '\n';
	std::cout << '\n';

	array = { 9, 8, 7 };

	std::cout << "The length is: " << array.size() << '\n';
	std::cout << "The capacity is: " << array.capacity() << '\n';

	return 0;
}
