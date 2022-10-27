#include <iostream>

double getDoubleValue();
char getSymbol();
void printAnswer(double x, double y, char ch);

int main() {
	double x { getDoubleValue() };
	double y { getDoubleValue() };
	char ch { getSymbol() };
	printAnswer(x, y, ch);
}

double getDoubleValue() {
	double x { };
	std::cout << "Enter a double value: ";
	std::cin >> x;
	return x;
}

char getSymbol() {
	char ch { };
	std::cout << "Enter one of the following: +, -, *, or /: ";
	std::cin >> ch;
	return ch;
}

void printAnswer(double x, double y, char ch) {
	double answer { };
	switch (ch) {
	case '+':
		answer = x + y;
		break;
	case '-':
		answer = x - y;
		break;
	case '*':
		answer = x * y;
		break;
	case '/':
		answer = x / y;
		break;
	default:
		break;
	}
	std::cout << x << ' ' << ch << ' ' << y << " is " << answer << std::endl;
}
