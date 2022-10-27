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

void printInt(int value) {
	std::cout << value;
}

int main() {
	Cents cents { 7 };
	printInt(cents.getCents());
	printInt(cents);
	int v = cents;
	std::cout << v;
	return 0;
}
