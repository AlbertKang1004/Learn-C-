#include <iostream>

void printChar(char str[]) {
	for (char *ptr = &str[0]; *ptr != '\0'; ptr++) {
		std::cout << *ptr;
	}
	std::cout << '\n';
}

int main() {
	char string[10] = "Hello!";
	printChar(string);
	return 0;
}
