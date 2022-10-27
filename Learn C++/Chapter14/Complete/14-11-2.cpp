#include <iostream>

class Cents {
private:
	int m_cents;
public:
	Cents(int cents = 0) :
			m_cents { cents } {
	}

	operator int() const {
		return m_cents;
	}
	int getCents() const {
		return m_cents;
	}
	void setCents(int cents) {
		m_cents = cents;
	}
};

class Dollars {
private:
	int m_dollars;
public:
	Dollars(int dollars = 0) :
			m_dollars { dollars } {
	}
	operator Cents() const {
		return Cents { m_dollars * 100 };
	}
};

void printCents(Cents cents) {
	std::cout << cents;
}

int main() {
	Dollars dollars{9};
	printCents(dollars);

	std::cout << '\n';

	return 0;
}
