#include <iostream>
#include <array>
#include <cstddef>

int main() {
	std::array data { 0, 1, 2, 3, 4, 5, 6 };
	std::size_t length { data.size() };

	std::size_t index { 0 };
	while (index != length) {
		std::cout << data[index] << ' ';
		++index;
	}
	std::cout << '\n';

	for (index = 0; index < length; ++index) {
		std::cout << data[index] << ' ';
	}
	std::cout << '\n';

	for (auto ptr { &data[0] }; ptr != (&data[0] + length); ++ptr) {
		std::cout << *ptr << ' ';
	}
	std::cout << '\n';

	for (int i : data) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	auto begin { data.begin() };
	auto end { data.end() };

	for (auto p { begin }; p != end; p++) {
		std::cout << *p << ' ';
	}
	std::cout << '\n';

	return 0;
}
