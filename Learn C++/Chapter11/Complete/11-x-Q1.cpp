#include <iostream>
#include <numeric>
#include <array>

enum Items {
	healthPotions, torches, arrows, max_items
};

using inventory_t= std::array<int, Items::max_items>;
int countTotalItems(inventory_t &player) {
	return std::accumulate(player.begin(), player.end(), 0);
}

int main() {
	std::array<int, Items::max_items> player { 2, 5, 10 };

	std::cout << countTotalItems(player) << '\n';
	return 0;
}
