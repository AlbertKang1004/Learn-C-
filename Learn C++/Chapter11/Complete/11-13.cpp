#include <iostream>
#include <vector>

int main() {

	constexpr int fibonacci[] { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	std::string array[] { "peter", "likes", "frozen", "yogurt" };

	for (auto number : fibonacci) {
		std::cout << number << ' ';
	}
	std::cout << '\n';

	for (const auto &element : array) {
		// copying string every time is expensize
		std::cout << element << ' ';
	}
	std::cout << '\n';

	std::vector fibon { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	for (auto number : fibon) {
		std::cout << number << ' ';
	}
	std::cout << '\n';

	return 0;
}
