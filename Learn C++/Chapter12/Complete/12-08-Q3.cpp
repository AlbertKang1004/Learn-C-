#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <cmath>

int randomNumber() {
	std::mt19937 mt {
			static_cast<unsigned int>(std::chrono::steady_clock::now().time_since_epoch().count()) };
	std::uniform_int_distribution rand { 2, 4 };
	return static_cast<int>(rand(mt));
}

int main() {
//	int start { };
//	int count { };
//	std::cout << "Start where? ";
//	std::cin >> start;
//	std::cout << "How many? ";
//	std::cin >> count;
//
//	std::vector<int> list;
//	list.resize(count);
//
//	int multiply { randomNumber() };
//	for (int i = 0; i < count; i++) {
//		list[i] = (start + i) * (start + i) * multiply;
//	}
//
//	std::cout << "I generated " << count
//			<< " square numbers. Do you know what each number is after multiplying by "
//			<< multiply << "?\n";
//	int input { };
//	for (int i = count - 1; i >= 0; i--) {
//		std::cin >> input;
//		auto found { std::find(list.begin(), list.end(), input) };
//		if (found == list.end()) {
//			auto result { std::min_element(list.begin(), list.end(),
//					[=](const auto &a, const auto &b) {
//						return (std::abs(a - input) < std::abs(b - input));
//					}) };
//			if (std::abs(*result - input) <= 4) {
//				std::cout << input << " is wrong! try " << *result << " next time.\n";
//				break;
//			} else {
//				std::cout << input << " is wrong!\n";
//				break;
//			}
//
//		} else {
//			if (i == 0) {
//				std::cout << "Nice! You found all numbers, good job!\n";
//				return 0;
//			} else {
//				std::cout << "Nice! " << i << " numbers left.\n";
//				list.erase(found);
//			}
//		}
//	}
//
//	return 0;
}
