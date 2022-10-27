#include <iostream>

int main() {
	char ch { };
	std::cout << "Enter a single character: ";
	std::cin >> ch;
	int x { ch };
	std::cout << "you entered \'" << ch << "\', which has ASCII CODE "
			<< x << ".\n";
	return 0;
}
