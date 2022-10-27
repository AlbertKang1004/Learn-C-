#include <iostream>

using ArithmeticFunction = std::function<int(int, int)>;

int getInteger() {
	std::cout << "Enter an Integer: ";
	int i { };
	std::cin >> i;
	return i;
}

char getOperator() {
	start: std::cout << "Enter the operator: ";
	char c { };
	std::cin >> c;
	if (c == '+' || c == '-' || c == '*' || c == '/') {
		return c;
	} else {
		goto start;
	}
}

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int division(int a, int b) {
	return a / b;
}

ArithmeticFunction getArithmeticFunction(char c) {
	switch (c) {
	case '+':
		return &add;
	case '-':
		return &subtract;
	case '*':
		return &multiply;
	case '/':
		return &division;
	}
	return nullptr;
}

int main() {
	int x { getInteger() };
	char c { getOperator() };
	int y { getInteger() };
	ArithmeticFunction fcn { getArithmeticFunction(c) };
	std::cout << x << ' ' << c << ' ' << y << " = " << fcn(x, y) << '\n';

	return 0;
}
