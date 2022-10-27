//#include <iostream>
//#include <string>
//
//class MyString {
//private:
//	std::string m_str { };
//public:
//	MyString(std::string str) :
//			m_str { str } {
//	}
//
//	std::string operator() (int start, int length);
//};
//
//std::string MyString::operator() (int start, int length) {
//	std::string temp {};
//	for (int i = start; i < start + length; i++) {
//		temp += m_str[i];
//	}
//	return temp;
//}
//
//int main() {
//	MyString string { "Hello, world!" };
//	std::cout << string(7, 5) << '\n'; // start at index 7 and return 5 characters
//	return 0;
//}
