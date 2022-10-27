#include <iostream>

int main() {
	// Floating Point
	float f = 0.0;
	double d = 1.3;
	long double ld = 3.141592;

	// Integral (Boolean)
	bool b = true;

	// Integral (Character)
	char c = 'a';
	wchar_t wc = 'c';

	// Integral (Integer)
	short s = 321;
	int i = 32892;
	long l = 151203123095;
	long long ll = 2398764071945710359;

	// Null Pointer
	std::nullptr_t n;

	//Void void

	std::cout << f << std::endl;
	std::cout << d << std::endl;
	std::cout << ld << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << wc << std::endl;
	std::cout << s << std::endl;
	std::cout << i << std::endl;
	std::cout << l << std::endl;
	std::cout << ll << std::endl;
	std::cout << n << std::endl;

	return 0;
}
