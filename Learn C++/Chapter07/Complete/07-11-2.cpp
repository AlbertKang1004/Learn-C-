#include <iostream>

int main() {
	std::cout << 1 << '\n';
	std::abort(); // abnormal termination

	std::cout << 2 << '\n';
	return 0;
}
