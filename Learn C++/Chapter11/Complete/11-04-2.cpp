#include <iostream>
#include <utility>
int main() {
	int array[] { 30, 50, 20, 10, 40 };
	constexpr int length { sizeof(array) / sizeof(array[0]) };
	for (int startIndex { 0 }; startIndex < length - 1; ++startIndex) {
		int minIndex { startIndex };

		for (int currentIndex { startIndex + 1 }; currentIndex < length;
				++currentIndex) {
			if (array[currentIndex] > array[minIndex])
				minIndex = currentIndex;
		}

		std::swap(array[startIndex], array[minIndex]);
	}

	for (int index = 0; index < length; ++index) {
		std::cout << array[index] << ' ';
	}

	std::cout << '\n';

	return 0;
}
