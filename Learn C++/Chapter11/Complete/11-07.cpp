#include <iostream>
#include <string>
#include <string_view>

int main() {
	char text[] { "Hello" };
	std::string str;
	str = text;
	std::string more;
	more = str;

	std::cout << text << ' ' << str << ' ' << more << '\n';

	std::string_view str2;
	str2 = "Trains ...";
	std::cout << str2.length() << '\n';
	std::cout << str2.substr(0, str2.find('s')) << '\n';

//	std::cout << str.starts_with("Boats") << '\n';
	return 0;
}
