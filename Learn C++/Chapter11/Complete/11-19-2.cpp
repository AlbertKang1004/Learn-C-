#include <iostream>
#include <algorithm>
#include <array>
#include <string_view>

bool containsNut(std::string_view str) {
	return (str.find("nut") != std::string_view::npos);
}

bool greater(int a, int b) {
	return (a > b);
}

void doubleNumber(int &i) {
	i *= 2;
}

int main() {
	std::array<std::string_view, 5> arr { "apple", "banana", "walnut", "walnut",
			"peanut" };
	auto nuts { std::count_if(arr.begin(), arr.end(), containsNut) };
	std::cout << "Counted " << nuts << " nut(s)\n";

	std::array array { 15, 7, 82, 32, 88, 10 };
	std::sort(array.begin(), array.end(), greater);
	for (auto i : array) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	std::for_each(array.begin(), array.end(), doubleNumber);
	for (auto i : array) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	return 0;
}
