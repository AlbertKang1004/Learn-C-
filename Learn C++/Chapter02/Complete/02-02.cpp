#include <iostream>

int getValueFromUser() {
	// get a value from the user
	std::cout << "Enter an Integer: ";
	int num { };
	std::cin >> num;

	return num;
}

int main() {
	int num { getValueFromUser() };

	// print the value doubled
	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}
