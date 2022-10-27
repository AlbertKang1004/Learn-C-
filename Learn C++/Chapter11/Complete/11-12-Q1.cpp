#include <iostream>
#include <algorithm>

int main() {

	std::cout << "How many names do you want to enter?: ";
	int namesCount { };
	std::cin >> namesCount;
	std::string * names{ new std::string[namesCount] { }};

	for (int i = 0; i < namesCount; i++) {
		std::cout << "Enter name #" << i + 1 << ": ";
		std::cin >> names[i];
	}

	std::sort(names, names + namesCount);
	std::cout << "Here is your sorted list: " << '\n';
	for (int i = 0; i < namesCount; i++) {
		std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';
	}
	delete[] names;

	return 0;
}
