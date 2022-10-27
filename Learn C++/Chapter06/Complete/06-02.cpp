#include <iostream>

int doSomething(int x, int y) {
	return x * y;
}

namespace foo {
int doSomething(int x, int y) {
	return x + y;
}
}

namespace goo {
int doSomething(int x, int y) {
	return x - y;
}
}

namespace a {
namespace b {
	int doSomething (int x, int y) {
		return x / y;
	}
}
}
int main() {
	std::cout << foo::doSomething(4, 3) << std::endl;
	std::cout << goo::doSomething(4, 3) << std::endl;
	std::cout << ::doSomething(4, 3) << std::endl;

	std::cout << a::b::doSomething(4, 3) << std::endl;
	namespace c =  a::b;
	std::cout << c::doSomething(4, 3) << std::endl;
	return 0;
}

