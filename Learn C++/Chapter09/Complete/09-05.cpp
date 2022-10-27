#include <iostream>
#include <string>

void printValue(int y) {
	std::cout << y << '\n';
}

void printValue(std::string &y) {
	std::cout << y << '\n';
}

void foo(int a, int &b, const std::string &c) {
	std::cout << a << b << c << '\n';
}

int main() {
	int x { 2 };
	printValue(x);
	std::string X;
	X = "Hi.";

	printValue(X);

	int y { 5 };
	const std::string s(X);
	foo(y, y, s);
	return 0;
}
