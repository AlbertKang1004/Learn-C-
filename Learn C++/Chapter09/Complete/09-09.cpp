#include <iostream>
#include <string>

void printByValue(std::string val) {
	std::cout << val << '\n';
}

void printByReference(const std::string &ref) {
	std::cout << ref << '\n';
}

void printByAddress(const std::string* ptr) {
	std::cout << *ptr << '\n';
}
int main() {
	std::string str;
	str = "Hello World!";

	printByValue(str);
	printByReference(str);
	printByAddress(&str);
}
