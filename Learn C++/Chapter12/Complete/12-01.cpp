#include <iostream>
#include <functional>

int foo() {
	return 5;
}

double goo() {
	return 6;
}

int hoo(int x) {
	return 7;
}

int main() {
//	int (*fcnPtr)() {&foo};
//	double (*fcnPtr2)() {&goo};
//	int (*fcnPtr3)(int) {&hoo};
//	std::cout << reinterpret_cast<void*>(foo) << '\n';

	auto fcnPtr {&foo};
	std::cout << fcnPtr() << '\n';
	return 0;
}
