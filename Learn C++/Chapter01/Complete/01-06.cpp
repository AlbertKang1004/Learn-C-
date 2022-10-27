#include <iostream>
using namespace std;

void doNothing(int&) {

}

int main() {
	int x;
	doNothing(x);
	cout << x; // prints garbage value
	return 0;
}
