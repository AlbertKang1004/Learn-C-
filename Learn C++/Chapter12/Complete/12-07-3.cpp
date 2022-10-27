#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

int main() {
	constexpr std::array months { "January", "February", "March", "April",
			"May", "June", "July", "August", "September", "October", "November",
			"December" };
	const auto sameLetter { std::adjacent_find(months.begin(), months.end(),
			[](const auto &a, const auto &b) {
				return (a[0] == b[0]);
			}) };
	if (sameLetter != months.end()) {
		std::cout << *sameLetter << " and " << *std::next(sameLetter)
				<< " start with the same letter\n";
	}

//	auto print { [](auto value) {
//		static int callCount { 0 };
//		std::cout << callCount++ << ": " << value << '\n';
//	} };
//
//	print("Hello");
//	print("world");
//
//	print(1);
//	print(2);
//
//	print("Ding");

//	auto divide { [](int x, int y, bool bInteger) -> double {
//		if (bInteger)
//			return x / y;
//		else
//			return static_cast<double>(x) / y;
//	} };
//
//	std::cout << divide(3, 2, true) << '\n';
//	std::cout << divide(3, 2, false) << '\n';
//
//	return 0;
}

