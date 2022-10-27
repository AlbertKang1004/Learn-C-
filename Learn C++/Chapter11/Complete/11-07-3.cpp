#include <iostream>
#include <string>
#include <string_view>

std::string_view askForName() {
	std::cout << "What's your name?\n";

	std::string name { };
	std::cin >> name;

	std::string_view view = name;
	std::cout << "Hello " << view << '\n';
	return view;
}

int main() {
	std::string_view view = askForName();
	std::cout << "Your name is" << view << '\n';
	return 0;
}
