#include <iostream>

struct Something {
	int x;
	int y {};
	int z { 2 };
};

int main() {
	Something s1; // s1.x = uninitialized
	Something s2 {}; // s2.x = 0
	Something s3 {5, 6, 7}; // s3.x = 5

	return 0;
}
