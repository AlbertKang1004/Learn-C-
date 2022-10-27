#include <iostream>

int factorial(int num) {
	if (num == 0 || num == 1)
		return 1;
	else {
		return num * factorial(num - 1);
	}
}

int sumDigit(int num) {
	if (num < 10) {
		return num;
	} else {
		return sumDigit(num / 10) + num % 10;
	}

}

int main() {
	for (int i = 1; i <= 7; i++) {
		std::cout << factorial(i) << '\n';
	}
	return 0;
}
