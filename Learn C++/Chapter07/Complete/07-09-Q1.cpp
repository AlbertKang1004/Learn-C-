#include <iostream>

int sumTo(int a) {
	int sum { 0 };
	for (int i = 1; i <= a; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	for (int i = 0; i <= 20; i++) {
		std::cout << i << ' ';
	}

	std::cout << '\n';

	std::cout << sumTo(5);
	return 0;
}
