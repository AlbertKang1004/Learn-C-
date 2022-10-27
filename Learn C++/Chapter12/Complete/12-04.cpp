#include <iostream>

void countDown(int count) {
	std::cout << "push " << count << '\n';

	if (count > 1)
		countDown(count - 1);

	std::cout << "pop " << count << '\n';
}

int sumTo(int sumto) {
	if (sumto <= 0)
		return 0;
	else if (sumto == 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

int main() {
	countDown(5);
	sumTo(5);
	return 0;
}
