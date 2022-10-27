#include <iostream>

class Cents {
private:
	int m_cents { };
public:
	Cents(int cents) :
			m_cents { cents } {
	}
	int getCents() const {
		return m_cents;
	}
};

Cents add(const Cents &c1, const Cents &c2) {
	return {c1.getCents() + c2.getCents()};
}

void print(const Cents &cents) {
	std::cout << cents.getCents() << " cents\n";
}
int main() {
	print(Cents { 6 });

	std::cout << "I have " << add(Cents { 6 }, Cents { 8 }).getCents()
			<< " cents.\n";
	return 0;
}
