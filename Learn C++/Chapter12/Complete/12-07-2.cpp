#include <iostream>
#include <functional>

int main() {

	double (*addNumbers1)(double, double) {
		[](double a ,double b) {
			return (a + b);
		}
	};

	std::cout << addNumbers1(1, 2) << '\n';

	std::function addNumbers2{
		[](double a, double b) {
			return (a + b);
		}
	};

	std::cout << addNumbers2(1, 2) << '\n';

//	auto addNumbers3{
//		[](double a, double b) {
//			return (a + b);
//		}
//	};
//
//	std::cout << addNumbers3(1, 2) << '\n';

	return 0;
}
