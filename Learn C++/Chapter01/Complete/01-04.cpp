#include <iostream>
using namespace std;

int main() {
//	int width; 					// copy initialization
//	int height(); 				// direct initialization
	int depth { }; 				// brace initialization
//
//	cout << width << endl; 		// garbage value
//	cout << height << endl; 	// 1
	cout << depth << endl; 		// 0
	return 0;
}
