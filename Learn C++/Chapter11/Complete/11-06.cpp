#include <iostream>
#include <iterator>

int main() {
	char myString[]{"String"};
//	const int length {static_cast<int>(std::size(myString))};
	const int length{sizeof(myString) / sizeof(myString[0])};
	std::cout << myString << " has " << length << " characters.\n";

	for (int index{0}; index < length; ++index) {
		std::cout << static_cast<int>(myString[index]) << ' ';
	}
	std::cout << '\n';

	char name[255] {};
	std::cout << "Enter your name: ";
	std::cin.getline(name, sizeof(name) / sizeof(name[0]));
	std::cout << "You entered: " << name << '\n';

	return 0;
}
