#include <iostream>
#include <array>
#include <algorithm>
#include <cstddef>

template<typename T, std::size_t size>
void printArray(const std::array<T, size> &myArray) {
	for (auto element : myArray)
		std::cout << element << ' ';
	std::cout << '\n';
}

int main() {
	std::array<int, 3> myArray;
	std::array<int, 5> myArray2 { 1, 3, 5, 7, 9 };
	std::array myArray3 { 3.4, 1.1 };

	std::cout << myArray[1] << '\n';
	std::cout << myArray2[1] << '\n';
	std::cout << myArray3[1] << '\n';
	myArray.at(2) = 4;
	std::cout << myArray.at(2) << '\n';
	std::cout << myArray.size() << '\n';

	std::array unsortedArray { 5, 7, 9, 1, 3, 4, 0, 2 };
	std::sort(unsortedArray.begin(), unsortedArray.end());

	for (int element : unsortedArray)
		std::cout << element << ' ';
	std::cout << '\n';

	printArray(myArray2);

	return 0;
}
