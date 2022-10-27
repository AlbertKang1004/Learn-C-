#include <iostream>

extern int g_x;
extern const int g_y;

int main() {
	std::cout << g_x << std::endl;
	std::cout << g_y << std::endl;
	return 0;
}
