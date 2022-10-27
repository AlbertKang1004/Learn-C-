#include <cstdlib>
#include <iostream>

void cleanup() {
	std::cout << "cleanup!\n";
}

int main() {
	std::atexit(cleanup);
	std::cout << 1 << '\n';

	std::exit(0);

	std::cout << 2 << '\n';
	return 0;
}
