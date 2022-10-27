#include <iostream>

class Cents {
private:
	int m_cents { };

public:
	Cents(int cents) :
			m_cents { cents } {
	}

	friend Cents operator+(const Cents &c1, const Cents &c2);
	friend Cents operator-(const Cents &c1, const Cents &c2);
	int getCents() const {
		return m_cents;
	}
};

Cents operator+(const Cents &c1, const Cents &c2) {
	return Cents { c1.m_cents + c2.m_cents };
}

Cents operator-(const Cents &c1, const Cents &c2) {
	return Cents { c1.m_cents - c2.m_cents };
}

int main() {
	Cents c1 { 6 };
	Cents c2 { 8 };
//	Cents cSum { c1 + c2 };
//	Cents cSub { c1 - c2 };
//	std::cout << "I have " << cSum.getCents() << " cents.\n";
//	std::cout << "I have " << cSub.getCents() << " cents.\n";
}
