#include <iostream>

int main() {
	int smaller { };
	int larger { };
	std::cout << "Enter an integer: ";
	std::cin >> smaller;
	std::cout << "Enter a larger integer: ";
	std::cin >> larger;

	if (larger < smaller) {
		int temp { };
		temp = larger;
		larger = smaller;
		smaller = temp;
		std::cout << "Swapping the values" << std::endl;
	}

	std::cout << "The smaller value is " << smaller << std::endl;
	std::cout << "The larger value is " << larger << std::endl;

	return 0;
}
