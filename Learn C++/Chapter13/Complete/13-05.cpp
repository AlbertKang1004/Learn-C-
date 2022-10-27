#include <iostream>

class Fraction {
private:
	int m_numerator { };
	int m_denominator { };

public:

	Fraction() = default;
	Fraction(int numerator, int denominator) {
		assert(denominator != 0);
		m_numerator = numerator;
		m_denominator = denominator;
	}

	int getNumerator() {
		return m_numerator;
	}
	int getDenominator() {
		return m_denominator;
	}
	double getValue() {
		return static_cast<double>(m_numerator) / m_denominator;
	}

};

class A {
public:
	A() {
		std::cout << "A\n";
	}
};

class B {
private:
	A m_a;

public:
	B() {
		std::cout << "B\n";
	}
};

int main() {
	Fraction zero { };
	std::cout << zero.getNumerator() << '\n';
	std::cout << zero.getDenominator() << '\n';

	B b;
	return 0;
}
