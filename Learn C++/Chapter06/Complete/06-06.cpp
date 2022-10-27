#include <iostream>

static int g_x; // static = internal linkage
// only recognizable in a same file
// no need to use static keyword

const int g_y { 1 };
constexpr int g_z { 2 };

int add(int x, int y);
// functions have external linkage by default

int main() {
	std::cout << g_x << std::endl;
	std::cout << g_y << std::endl;
	std::cout << g_z << std::endl;
	std::cout << add(g_x, g_y) << std::endl;
	return 0;
}
