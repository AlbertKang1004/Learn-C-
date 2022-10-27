//#include <iostream>
//#include "constants.h"
//
//double calculateHeight(double initialHeight, int seconds) {
//	double distanceFallen { myConstants::gravity * seconds * seconds / 2 };
//	double heightNow { initialHeight - distanceFallen };
//	if (heightNow < 0.0)
//		return 0.0;
//	else
//		return heightNow;
//}
//
//void calculateAndPrintHeight(double initialHeight) {
//	bool atTheGround = false;
//	for (int i = 0; !atTheGround; i++) {
//		atTheGround = (calculateHeight(initialHeight, i) == 0.0);
//		std::cout << "At " << i << " seconds, the ball is at height: "
//				<< calculateHeight(initialHeight, i) << "m\n";
//	}
//}
//
//int main() {
//	std::cout << "Enter the initial height of the tower in meters: ";
//	double initialHeight { };
//	std::cin >> initialHeight;
//
//	calculateAndPrintHeight(initialHeight);
//	return 0;
//}
