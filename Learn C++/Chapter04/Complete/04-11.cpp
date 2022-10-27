#include <iostream>

int main() {
	char ch1 { 97 };  // a
	char ch2 { 'a' }; // preferred

	std::cout << ch1 << std::endl;
	std::cout << ch2 << std::endl;

	std::cout << "My name is\nAlbert" << std::endl;
	// \n starts a new line

	std::cout << "First Part\tSecond Part" << std::endl;
	// \t creates a horizontal tab

	return 0;
}
