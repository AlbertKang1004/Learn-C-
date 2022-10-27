#include <iostream>

void print(int) {

}

void print(double) {

}

void func(const int) {

}

void func(double) {

}

void str(double) {

}

int main() {
	print(0); // void print(int)
	print(3.4); // void print(double)
	print('a'); // char -> int

	int x { 1 };
	func(x); // int -> const int

	const double d { 1.3};
	func(d); // const double -> double
	func(3.5f); // float -> double

	str('b'); // char -> int -> double
	return 0;
}
