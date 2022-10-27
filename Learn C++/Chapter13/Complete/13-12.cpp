#include <iostream>

class Something {
public:
	int m_value { };
	Something() :
			m_value { 0 } {
	}
	void setValue(int value) {
		m_value = value;
	}
	int getValue() const;
};

int Something::getValue() const {
	return m_value;
}

int main() {
	const Something something { };
	std::cout << something.getValue();

	return 0;
}
