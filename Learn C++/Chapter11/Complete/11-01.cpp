#include <iostream>

int main() {
	int prime[5] { };
	prime[0] = 2;
	prime[1] = 3;
	prime[2] = 5;
	prime[3] = 7;
	prime[4] = 11;

	std::cout << "The lowest prime number is: " << prime[0] << '\n';
	std::cout << "The sum of the first 5 primes is: "
			<< prime[0] + prime[1] + prime[2] + prime[3] + prime[4];

	return 0;
}
