#include <iostream>

//using color_t = int;
//
//constexpr color_t red { 0 };
//constexpr color_t green { 1 };
//constexpr color_t blue { 2 };

enum Color {
	red, green, blue,
};

enum Pet {
	cat, dog, pig, whale,
};

int main() {
//	color_t appleColor { red };
//	color_t shirtColor { green };
	Color apple { red };
	Color shirt { green };
	Color cup { blue };

	std::cout << apple << std::endl;
	std::cout << shirt << std::endl;
	std::cout << cup << std::endl;

	if (apple == red) {
		std::cout << "The apple is red!" << std::endl;
	}
//	Color socks { white };
//	Color hat { 2 };
	return 0;
}
