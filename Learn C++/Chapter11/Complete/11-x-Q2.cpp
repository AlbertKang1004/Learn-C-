#include <iostream>
#include <algorithm>
#include <vector>

struct Student {
	std::string name { };
	int score { };
};

bool greater(Student &a, Student &b) {
	return (a.score > b.score);
}

void printResult(Student &student) {
	std::cout << student.name << " got a grade of " << student.score << '\n';
}

int main() {
	std::cout << "How many students do you want: ";
	int studentCount;
	std::cin >> studentCount;
	std::vector<Student> student(studentCount);

	std::cout << "Enter your input: \n";
	for (auto &input : student) {

		std::cin >> input.name;
		std::cin >> input.score;
	}

	std::sort(student.begin(), student.end(), greater);

	for (auto &input : student) {
		printResult(input);
	}

	return 0;
}
