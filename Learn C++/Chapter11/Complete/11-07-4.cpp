#include <iostream>
#include <cstring>
#include <string_view>

int main() {
	std::string_view str { "balloon" };

	std::cout << str.data() << '\n';
	// Remove the "b"
	str.remove_prefix(1);
	std::cout << str.data() << '\n';
	// remove the "oon"
	str.remove_suffix(3);
	std::cout << str.data() << '\n';
	// Remember that the above doesn't modify the string, it only changes
	// the region that str is observing.

	std::cout << str << " has " << std::strlen(str.data()) << " letter(s)\n";
	std::cout << "str.data() is " << str.data() << '\n';
	std::cout << "str is " << str << '\n';

	return 0;
}
