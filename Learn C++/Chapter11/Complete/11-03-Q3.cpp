#include <iostream>
#include <iterator> // for std::size

int main() {
	constexpr int scores[] { 84, 92, 76, 81, 56 };

	int maxIndex { };

	// now look for a larger score in the full array
	for (int student { 0 };
			student < static_cast<int>(sizeof(scores) / sizeof(scores[0]));
			++student) {
		if (scores[student] > scores[maxIndex]) {
			maxIndex = student;
		}
	}

	std::cout << "The best score was " << scores[maxIndex] << '\n';

	return 0;
}
