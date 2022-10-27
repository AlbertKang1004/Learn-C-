#include <iostream>

int getHeight();
void calculateHeight(int height, int time);
constexpr double g_const = 9.8;

int main() {
	int height { getHeight() };
	for (int i = 0 ; i < 5; i++) {
		calculateHeight(height, i);
	}
	return 0;
}

int getHeight() {
	int height { };
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> height;
	return height;
}

void calculateHeight(int height, int time) {
	double h = height - (g_const * time * time / 2);
	if (h > 0) {
	std::cout << "At " << time << " seconds, the ball is at height: " <<
			h << " meters" << std::endl;

	} else {
		std::cout << "At " << time << " seconds, the ball is on the ground." << std::endl;
	}
}


