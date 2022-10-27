#include <iostream>
#include <string>

void print(int x, int y = 10) {
	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';
}

void P(std::string string) {

}

void P(char ch = ' ') {

}

int main() {
	print(1, 2);
	print(3);



	return 0;
}
