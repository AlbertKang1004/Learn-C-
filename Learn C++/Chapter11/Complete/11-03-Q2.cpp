#include <iostream>

int main() {
	constexpr int array[] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	int num { };
	int pos { };
	bool validInput { false };
	while (true) {
		std::cout << "Enter a number between 1 and 9: ";
		std::cin >> num;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		} else if (num > 9 || num < 1) {
			continue;
		} else {
			break;
		}
	}
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		std::cout << array[i] << " ";
		if (array[i] == num)
			pos = i;
	}
	std::cout << "\nThe number " << num << " has index " << pos << '\n';
	return 0;
}
