#include <iostream>

int main() {
	std::cout << "Hello world!" << std::endl;
	int x { 4 };
	std::cout << x << std::endl;

	std::cout << "Hi!\n";
	std::cout << '\n'; // this is also possible
	std::cout << "Hello!\n\n";

	std::cout << "Enter a number: ";
	int y { };
	std::cin >> y;

	std::cout << "You entered " << y << '\n';

	std::cout << std::endl;

	std::cout << "Enter two numbers: ";
	int a { }, b { };
	std::cin >> a >> b;

	std::cout << "You entered " << a << " and " << b << '\n';

// std::cout | prints a text
// std::endl | ends the line
// std::cin  | receives an input

	return 0;
}
