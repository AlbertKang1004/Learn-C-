#include <iostream>
#include <functional>

void invoke(const std::function<void()> &fn) {
	fn();
}

int main() {
//	int i { 0 };
//
//	auto count { [i]() mutable {
//		std::cout << ++i << '\n';
//	} };
//
//	invoke(std::ref(count));
//	invoke(std::ref(count));
//	invoke(std::ref(count));

	return 0;
}
