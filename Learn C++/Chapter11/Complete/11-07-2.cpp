#include <iostream>
#include <string_view>

void printSV(std::string_view sv) {
	std::cout << sv << '\n';
}

int main() {
	std::string original;
	original = "Peach";
	std::string_view str;
	str = original;

	std::cout << str << '\n';

	str.remove_prefix(1);
	std::cout << str << '\n';

	str.remove_suffix(2);
	std::cout << str << '\n';

	std::cout << original << '\n';
	// doesn't fix the original
	std::cout << static_cast<std::string>(str) << '\n';
	// std::string_view -> std::string
	return 0;

}
