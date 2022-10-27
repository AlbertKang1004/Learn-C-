#include <iostream>

int calculate(int a, int b, char oper);

int main() {
	std::cout << calculate(3, 5, '*') << std::endl;
	return 0;
}

int calculate(int a, int b, char oper) {
	switch (oper) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	default:
		std::cout << "ERROR!";
		return -1;
	}
}
