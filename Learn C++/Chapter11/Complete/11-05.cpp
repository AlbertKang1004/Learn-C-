#include <iostream>

int main() {
	int array[3][5] { };
	array[2][3] = 7;
	for (int row { 0 }; row < sizeof(array) / sizeof(array[0]); row++) {
		for (int col { 0 }; col < sizeof(array[0]) / sizeof(array[0][0]);
				col++) {
			std::cout << array[row][col];
		}
		std::cout << '\n';
	}
	return 0;
}
