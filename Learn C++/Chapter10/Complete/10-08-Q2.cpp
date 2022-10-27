#include <iostream>

struct Fraction {
	int numerator { 0 };
	int denominator { 1 };
};

Fraction getFraction() {
	Fraction f { };
	std::cout << "Enter a value for the numerator: ";
	std::cin >> f.numerator;
	std::cout << "Enter a value for the denominator: ";
	std::cin >> f.denominator;
	return f;
}

void multiplyFraction(const Fraction &f1, const Fraction &f2) {
	int num = f1.numerator * f2.numerator;
	int den = f1.denominator * f2.denominator;
	std::cout << "Your fractions multiplied together: " << num << '/' << den
			<< '\n';
}

int main() {
//	Fraction f1 { getFraction() };
//	Fraction f2 { getFraction() };
//
//	multiplyFraction(f1, f2);
	return 0;
}
