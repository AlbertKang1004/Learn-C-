#include <iostream>

class Cents {
private:
	int m_cents { };

public:
	Cents(int cents) :
			m_cents { cents } {
	}

	// Overload Cents + int
	Cents operator+(int value);

	int getCents() const {
		return m_cents;
	}
};

Cents Cents::operator+ (int value) {
	return Cents { m_cents + value };
}

int main() {
	Cents cents1 { 6 };
//	Cents cents2 { cents1 + 2 };
//	std::cout << "I have " << cents2.getCents() << " cents.\n";

	return 0;
}
