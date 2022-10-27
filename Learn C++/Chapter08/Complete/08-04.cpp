#include <iostream>
#include <typeinfo>

int main() {
//	int x { 2 + 3.4 };
	int i { 2 };
	double d { 3.5 };
	std::cout << typeid(i + d).name() << ' ' << i + d << '\n';

	return 0;
}
