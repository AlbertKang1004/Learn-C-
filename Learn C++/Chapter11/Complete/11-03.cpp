#include <iostream>
#include <iterator>

int main() {
	constexpr int scores[] { 84, 92, 76, 81, 56 };
	constexpr int numStudents { sizeof(scores) / sizeof(scores[0]) };
	int totalScore { 0 };
	for (int student { 0 }; student < numStudents; ++numStudents)
		totalScore += scores[student];
	auto averageScore { static_cast<double>(totalScore) / numStudents };
	return 0;
}
