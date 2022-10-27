#include <iostream>

int getValueFromUser() {
	std::cout << "Enter an integer: ";
	int input { };
	std::cin >> input;

	return input;
}

void printDouble(int num) {
	std::cout << num << " doubled is: " << num * 2 << '\n';
}

int doubleNumber(int x) {
	return x * 2;
}

void printDoubleNumber(int x) {

	std::cout << doubleNumber(x) << '\n';
}

int main() {
//	int num { getValueFromUser() };
//	printDouble(num);
	printDouble(getValueFromUser());
	return 0;
}
