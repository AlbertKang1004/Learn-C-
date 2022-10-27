#include <iostream>

int main() {
	double d { 5.0 };
	std::cout << static_cast<int>(d);
//
//	// Converting an integral type to any other integral type
//	short s = 3; // int -> short
//	long l = 3; // int -> long
//	char ch = s; // short -> char
//
//	float f = 3.0; // double -> float
//	long double ld = 3.0; // double -> long double
//
//	int i = 3.5; // double -> int
//
//	double d2 = 3; // int -> double
//
//	bool b1 = 3; // int -> bool
//	bool b2 = 3.0; // double -> bool
	return 0;
}
