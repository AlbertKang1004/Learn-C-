#include <iostream>
#include <string>

void greet(std::string *name = nullptr) {
	std::cout << "Hello ";
	std::cout << (name ? *name : "guest") << '\n';
}

void nullify(int *&ptr2) {
	ptr2 = nullptr;
}

int main() {
	int x { 5 };
	int *ptr { &x };

	std::cout << "ptr is " << (ptr ? "non-null\n" : "null\n");
	nullify(ptr);
	std::cout << "ptr is " << (ptr ? "non-null\n" : "null\n");
	greet();

	std::string joe;
	joe = "Joe";
	greet(&joe);
	return 0;
}
