#include <iostream>

int main() {
	int count { 1 };
	while (count <= 10) {
		std::cout << count++ << ' ';
	}

	std::cout << "Done !";
	std::cout << std::endl;
	int outer { 1 };
	while (outer <= 5) {
		int inner { 1 };
		while (inner <= outer) {
			std::cout << inner << ' ';
			++inner;
		}
		std::cout << '\n';
		++outer;
	}
	return 0;
}
