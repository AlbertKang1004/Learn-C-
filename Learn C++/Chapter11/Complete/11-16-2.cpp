#include <iostream>
#include <array>

struct House {
	int number { };
	int stories { };
	int roomsPerStory { };
};

int main() {
	std::array myArray { 7, 3, 1, 9, 5 };

	for (std::size_t i { 0 }; i < myArray.size(); ++i) {
		std::cout << myArray[i] << ' ';
	}
	std::cout << '\n';

	for (auto i { myArray.size() }; i-- > 0;)
		std::cout << myArray[i] << ' ';
	std::cout << '\n';

	std::array<House, 3> houses {
			{ { 13, 4, 30 }, { 14, 3, 10 }, { 15, 3, 40 } } };
	for (const auto &house : houses) {
		std::cout << "House number " << house.number << " has "
				<< (house.stories * house.roomsPerStory) << " rooms\n";
	}

	return 0;
}
