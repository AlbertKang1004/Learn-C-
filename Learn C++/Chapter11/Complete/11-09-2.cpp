#include <iostream>

bool isVowel(char ch) {
	switch (ch) {
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return true;
	default:
		return false;
	}
}
int main() {
	char name[] { "Mollie" };
	auto numVowels { std::count_if(std::begin(name), std::end(name), isVowel) };
	std::cout << name << " has " << numVowels << " vowels.\n";
	return 0;
}
