#include <iostream>
#include <string>

const std::string& getProgramName() {
	static const std::string s_programName;
//	s_programName = "Calculator";
	return s_programName;
}

int main() {
	std::cout << "This program is named" << getProgramName();
	return 0;
}
