#include <iostream>

//int max(int x, int y) {
//	return (x > y) ? x : y;
//}
//
//double max(double x, double y) {
//	return (x > y) ? x : y;
//}

// a single function template for max
template <typename T>
T max(T x, T y) {
	return (x > y) ? x : y;
}

int main() {
	std::cout << max(5, 6);
	std::cout << '\n';
	std::cout << max(1.2, 3.4);

	return 0;
}
