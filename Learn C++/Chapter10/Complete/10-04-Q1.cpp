#include <iostream>

enum class Animal {
	pig, chicken, goat, cat, dog, duck,
};

constexpr std::string_view getAnimalName(Animal animal) {
	switch (animal) {
	case Animal::pig:
		return "pig";
		break;
	case Animal::chicken:
		return "chicken";
		break;
	case Animal::goat:
		return "goat";
		break;
	case Animal::cat:
		return "cat";
		break;
	case Animal::dog:
		return "dog";
		break;
	case Animal::duck:
		return "duck";
		break;
	default:
		return "???";
	}
}

void printNumberOfLegs(Animal animal) {

	std::cout << "A " << getAnimalName(animal) << " has ";
	switch (animal) {
	case Animal::pig:
		std::cout << "4";
		break;
	case Animal::chicken:
		std::cout << "2";
		break;
	case Animal::goat:
		std::cout << "4";
		break;
	case Animal::cat:
		std::cout << "4";
		break;
	case Animal::dog:
		std::cout << "4";
		break;
	case Animal::duck:
		std::cout << "2";
		break;
	default:
		std::cout << "???";
		break;
	}

	std::cout << " legs.\n";
}

int main() {
	printNumberOfLegs(Animal::cat);
	printNumberOfLegs(Animal::chicken);
	return 0;
}
