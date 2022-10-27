#include <iostream>
#include <vector>

class MyClass {
public:
	static std::vector<char> s_mychars;
};

//std::vector<char> MyClass::s_mychars { [] {
//	std::vector<char> v { };
//	for (char ch { 'a' }; ch <= 'z'; ++ch) {
//		v.push_back(ch);
//	}
//	return v;
//}() };

int main() {

	return 0;
}
