#include <iostream>
#include <string>

class MyString {
private:
	std::string m_string;

public:
	MyString(char) = delete;

	explicit MyString(int x) { // allocate string of size x
		m_string.resize(x);
	}
	MyString(const char *string) {
		m_string = string;
	}
	friend std::ostream& operator<<(std::ostream &out, const MyString &s);
};

std::ostream& operator<<(std::ostream &out, const MyString &s) {
	out << s.m_string;
	return out;
}

void printString(const MyString &s) {
	std::cout << s;
}

int main() {
//	MyString mine = 'x';
//	std::cout << mine << '\n';
//
//	printString('x');
	return 0;
}
