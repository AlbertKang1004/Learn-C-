#include <iostream>

int main() {
	int x { 10 };
	int y { 4 };

	double d { (double) x / y };
	std::cout << d; // print 2.5
	return 0;
}
