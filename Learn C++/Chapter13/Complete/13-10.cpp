#include <iostream>

class Simple {
private:
	int m_id;
public:
	Simple(int id) :
			m_id { id } {
	}

	void setID(int id) {
		m_id = id;
	}
	int getID() {
		return m_id;
	}
};

class Calc {
private:
	int m_value;
public:
	Calc& add(int value) {
		m_value += value;
		return *this;
	}
	Calc& sub(int value) {
		m_value -= value;
		return *this;
	}
	Calc& mul(int value) {
		m_value *= value;
		return *this;
	}

	int getValue() {
		return m_value;
	}
};

int main() {
	Simple simple { 1 };
	simple.setID(2);
	std::cout << simple.getID() << '\n';

	Calc calc { };
	calc.add(5).sub(3).mul(4);
	std::cout << calc.getValue() << '\n';
	return 0;
}
