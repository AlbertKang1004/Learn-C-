#include <iostream>
#include <limits>

void ignoreLine() {
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble() {
	while (true) {
		std::cout << "Enter a double value: ";
		double x { };
		std::cin >> x;
		if (std::cin.fail()) {
			std::cin.clear(); // put us back in normal mode
			ignoreLine(); // remove bad input
		} else {
			ignoreLine();
			return x;
		}
	}
}

char getOperator() {
	while (true) {
		std::cout << "Enter one of the following: +, -, *, or /: ";
		char op { };
		std::cin >> op;

		switch (op) {
		case '+':
		case '-':
		case '*':
		case '/':
			return op;
		default:
			std::cerr << "Error: The input is invalid";
		}
	}
}

void printResult(double x, char operation, double y) {
	switch (operation) {
	case '+':
		std::cout << x << " + " << y << " is " << x + y << '\n';
		break;
	case '-':
		std::cout << x << " - " << y << " is " << x - y << '\n';
		break;
	case '*':
		std::cout << x << " * " << y << " is " << x * y << '\n';
		break;
	case '/':
		std::cout << x << " / " << y << " is " << x / y << '\n';
		break;
	}
}

int main() {
	double x { getDouble() };
	char operation { getOperator() };
	double y { getDouble() };

	printResult(x, operation, y);

	return 0;
}
