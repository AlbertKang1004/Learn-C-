#include <iostream>
#include <cstring>
#include <string.h>

int main() {
	char source[]{"Copy this!"};
	char dest[50];
	char dest2[50];
	std::strcpy(dest, source);
	std::strncpy(dest, source, sizeof(dest2) / sizeof(dest2[0]));
	std::cout << dest << '\n';
	std::cout << dest2 << '\n';
	return 0;
}
