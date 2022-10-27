#include <iostream>
#include <utility>

using Comparison = bool(*)(int, int);

void selectionSort(int *array, int size, Comparison c) {
	for (int startIndex { 0 }; startIndex < (size - 1); ++startIndex) {
		int bestIndex { startIndex };
		for (int currentIndex { startIndex + 1 }; currentIndex < size;
				++currentIndex) {
			if (c(array[bestIndex], array[currentIndex])) // COMPARISON DONE HERE
					{
				bestIndex = currentIndex;
			}
		}
		std::swap(array[startIndex], array[bestIndex]);
	}
}

bool ascending(int x, int y) {
	return x > y;
}

bool descending(int x, int y) {
	return x < y;
}

bool evenFirst(int x, int y) {
	if ((x % 2 == 0) && !(y % 2 == 0))
		return false;

	if ((!x % 2 == 0) && (y % 2 == 0))
		return true;

	return ascending(x, y);
}

void printArray(int *array, int size) {
	for (int index { 0 }; index < size; ++index) {
		std::cout << array[index] << ' ';
	}
	std::cout << '\n';
}

int main() {
	int array[9] { 3, 7, 9, 5, 6, 1, 8, 2, 4 };
	selectionSort(array, 9, descending);
	printArray(array, 9);
	return 0;
}
