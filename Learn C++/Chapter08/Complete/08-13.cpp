#include <iostream>

template <typename T>
T max (T x, T y) {
	return (x > y) ? x : y;
}

int main() {
	std::cout << max<int>(1,2) << '\n';
	std::cout << max<double>(1.3, 4.4) << '\n';
	std::cout << max("Hi", "Good");

	std::string hello;
	hello = "Hello, world!";
	return 0;
}
