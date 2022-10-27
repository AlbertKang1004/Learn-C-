#include <iostream>
#include <vector>

int fibonacci(int count) {
	if (count == 0)
		return 0;
	if (count == 1)
		return 1;
	return fibonacci(count - 1) + fibonacci(count - 2);
}
//
//int fibonacciAdvanced(int count) {
//
//	static std::vector<int> results {0, 1};
//
//	if (count < static_cast<int>(std::size(results)))
//		return results[count];
//	else {
//		results.push_back(fibonacci(count - 1) + fibonacci(count - 2));
//		return results[count];
//	}
//}

int main() {
	for (int count { 0 }; count < 13; ++count) {
		std::cout << fibonacci(count) << ' ';
	}

	return 0;
}
