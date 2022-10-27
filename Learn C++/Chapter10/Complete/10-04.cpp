#include <iostream>

enum class Animals {
	chicken, dog, cat, elephant, duck, snake,
};

int main() {
	enum class Color {
		red, blue,
	};
	enum class Fruit {
		banana, apple,
	};

	Color color { Color::red };
	Fruit fruit { Fruit::banana };

	std::cout << static_cast<int>(color) << std::endl;
	std::cout << static_cast<int>(fruit) << std::endl;
	Color color2 { 1 };
	std::cout << static_cast<int>(color2) << std::endl;
	return 0;
}
