#include <iostream>

class Something {
private:
	static int s_value;
public:
	static int getValue();
};

int Something::s_value { 1 };

int Something::getValue() {
	return s_value;
}

int main() {
	std::cout << Something::getValue() << '\n';
	return 0;
}
