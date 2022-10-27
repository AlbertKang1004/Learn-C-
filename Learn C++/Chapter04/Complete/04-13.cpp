#include <iostream>
#include <string>

int main() {
	std::string myName { "Alex" }; // @suppress("Invalid arguments")
	std::cout << "My name is " << myName << '\n';

	std::cout << "Enter your full name: ";
	std::string name { };
//	std::cin >> name; // only will receive a word
	std::getline(std::cin >> std::ws, name);

	std::cout << "Enter your age: ";
	std::string age { };
	std::getline(std::cin >> std::ws, age);

	std::cout << "Your name is " << name <<
			" and your age is " << age << '\n';

	std::cout << myName.length() << '\n';
	return 0;
}
