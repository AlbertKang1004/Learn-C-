#include <iostream>
#include <cstddef>

void print(int x) {
	std::cout << "print(int): " << x << '\n';
}

void print(int *ptr) {
	std::cout << "print(int*): " << (ptr ? "non-null\n" : "null\n");
}

void print(std::nullptr_t ptr) {
	std::cout << "nullptr\n";
}

int main() {

	int x { 5 };
	int *ptr { &x };

	print(ptr);
	print(0);

	//print(NULL); AMBIGUOUS
	print(nullptr);

	return 0;
}
