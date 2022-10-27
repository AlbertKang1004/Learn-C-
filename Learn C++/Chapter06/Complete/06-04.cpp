#include <iostream>

int g_x { }; // Global Variable

void doSomething() {
	g_x = 3;
	std::cout << g_x << std::endl;
}

int main() {
	doSomething();
	std::cout << g_x << std::endl;

	g_x = 5;
	std::cout << g_x << std::endl;
	doSomething();

	return 0;
}
