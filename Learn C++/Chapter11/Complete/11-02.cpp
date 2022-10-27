#include <iostream>
#include <iterator>

enum StudentNames {
	kenny, kyle, stan, butters, cartman, wendy, max_students
};

void passValue(int value) {
	value = 99;
}

void passArray(int prime3[5]) {
	prime3[0] = 11;
}
int main() {
	int prime[5] { 2, 3, 5, 7, 11 };
	int prime2[] { 13, 17, 19, 21, 23, 29 };
	// automatically sets length

	std::cout << prime[0] << std::endl;
	std::cout << prime2[1] << std::endl;

	int testScores[max_students] { };
	testScores[stan] = 76;

	int value { 1 };
	std::cout << "before passValue: " << value << '\n';
	passValue(value);
	std::cout << "after passValue: " << value << '\n';
	std::cout << "before passArray: " << prime[0] << " " << prime[1] << " "
			<< prime[2] << " " << prime[3] << " " << prime[4] << '\n';
	passArray(prime);
	std::cout << "after passArray: " << prime[0] << " " << prime[1] << " "
			<< prime[2] << " " << prime[3] << " " << prime[4] << '\n';

	std::cout << '\n';

	int array[] { 1, 1, 2, 3, 5, 8, 13, 21 };
	std::cout << sizeof(array) << '\n';
	std::cout << sizeof(int) << '\n';
	std::cout << sizeof(array) / sizeof(int) << '\n';
	std::cout << sizeof(array) / sizeof(array[0]) << '\n';
//	std::cout << std::size(array) << '\n';
	return 0;
}
