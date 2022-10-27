#include <iostream>
#include <array>
#include <algorithm>
#include <string_view>

bool containsNut(std::string_view str) {
	return (str.find("nut") != std::string_view::npos);
}

int main() {
	std::array arr { 13, 90, 99, 5, 40, 80 };
	std::cout << "Enter a value to search for and replace with: ";
	int search { };
	int replace { };
	std::cin >> search >> replace;

	auto found { std::find(arr.begin(), arr.end(), search) };

	if (found == arr.end()) {
		std::cout << "Could not find " << search << '\n';
	} else {
		*found = replace;
	}

	for (auto i : arr) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	std::array<std::string_view, 4> array { "apple", "banana", "walnut", "lemon" };
	auto found2 { std::find_if(array.begin(), array.end(), containsNut) };

	if (found2 == array.end()) {
		std::cout << "Could not find nuts" << '\n';
	} else {
		std::cout << "Found " << *found2 << '\n';
	}

	for (auto i : array) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	return 0;
}
