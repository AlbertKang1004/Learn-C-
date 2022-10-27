#include <iostream>

class Something {
private:
	const int m_value1 { };
	const double m_value2 { };
	const char m_value3 { };

public:
	Something(int value1, double value2, char value3 = 'c') :
			m_value1 { value1 }, m_value2 { value2 }, m_value3 { value3 } {

	}
	void print() {
		std::cout << "Something(" << m_value1 << ", " << m_value2 << ", "
				<< m_value3 << ")\n";
	}
};

int main() {
	Something something { 1, 2.3 };
	something.print();
	return 0;
}
