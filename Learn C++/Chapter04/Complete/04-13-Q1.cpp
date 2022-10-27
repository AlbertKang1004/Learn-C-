#include <iostream>
using namespace std;

int main() {
	cout << "Enter your full name: ";
	string name { };
	getline(cin >> ws, name);

	cout << "Enter your age: ";
	int age { };
	cin >> age;

	int sum { age + static_cast<int>(name.length()) };

	cout << "Your age + length of name is: " << sum << '\n';
	return 0;
}
