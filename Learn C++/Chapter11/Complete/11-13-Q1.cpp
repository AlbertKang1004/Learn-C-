#include <iostream>

int main() {
	std::string names[] { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred",
			"Greg", "Holly" };
	std::cout << "Enter a name: ";
	std::string target { };
	std::cin >> target;
	for (const auto &str : names) {
		if (str == target) {
			std::cout << target << " was found.\n";
			return 0;
		}
	}
	std::cout << target << " was not found.\n";

	return 0;
}
