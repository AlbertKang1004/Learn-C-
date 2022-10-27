#include <iostream>

class Cents {
private:
	int m_cents{};

public:
	Cents(int cents) : m_cents{cents} {}

	Cents operator-() const;
	int getCents() const {return m_cents;}
};

Cents Cents::operator-() const {
	return -m_cents;
}

int main() {
	const Cents nickle {5};
	std::cout << "A nickle is worth" << (-nickle).getCents() << "cents"
	return 0;
}
