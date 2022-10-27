#include <iostream>

void doA() {
	std::cout << "In doA()\n";
}

void doPrint() {
	std::cout << "In doPrint()\n";
}

int main() {
	std::cout << "Starting main()\n";
	doPrint(); // call doPrint();
	doPrint();
	std::cout << "Ending main()\n";
	return 0;
}
