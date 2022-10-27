#include <iostream>

class Foo {
private:
	int m_a { 1 };
	int m_b { 2 };

public:
	Foo() = default;

	Foo(int a, int b) :
			m_a { a }, m_b { b } {
	}

	void print() {
		std::cout << m_a << ' ' << m_b << '\n';
	}

	void reset() {
		*this = Foo();
	}
};

int main() {
	Foo a { 3, 4 };
	a.reset();
	a.print();
}
