#include <iostream>

int main() {
	for (int i = 97; i < 123; i++) {
		std::cout << static_cast<char>(i) << ' ';
	}

	std::cout << "\n\n";

	for (int i = 5; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			std::cout << j << ' ';
		}
		std::cout << '\n';
	}

	std::cout << "\n\n";

	for (int i = 1; i <= 5; i++) {
		for (int x = 1; x <= 5 - i; x++) {
			std::cout << ' ' << ' ';
		}
		for (int j = 1; j <= i; j++) {
			std::cout << j << ' ';
		}
		std::cout << '\n';
	}
	return 0;
}
