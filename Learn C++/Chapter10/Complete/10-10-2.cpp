#include <iostream>
#include <utility>

template<typename T>
struct Pair {
	T first { };
	T second { };
};

template<typename T>
constexpr T max(Pair<T> p) {
	return (p.first > p.second ? p.first : p.second);
}

template<typename T, typename U>
struct Pair2 {
	T first { };
	U second { };
};

template<typename T, typename U>
void print(Pair2<T, U> p) {
	std::cout << '[' << p.first << ", " << p.second << ']' << std::endl;
}

template<typename T, typename U>
void print(std::pair<T, U> p) {
	std::cout << '[' << p.first << ", " << p.second << ']';
}

int main() {
	Pair<int> p1 { 5, 6 };
	std::cout << p1.first << ' ' << p1.second << '\n';
	std::cout << max<int>(p1) << '\n';

	Pair<double> p2 { 1.3, 2.4 };
	std::cout << p2.first << ' ' << p2.second << '\n';
	std::cout << max<double>(p2) << '\n';

	Pair<double> p3 { 7.8, 9.0 };
	std::cout << p3.first << ' ' << p3.second << '\n';
	std::cout << max<double>(p3) << '\n';

	Pair2<int, double> p4 { 3, 2.2 };
	print(p4);

	std::pair<int, double> p5 { 7, 2.1 };
	print(p5);
	return 0;
}
