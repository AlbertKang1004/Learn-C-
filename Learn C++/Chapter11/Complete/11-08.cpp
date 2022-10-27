#include <iostream>

int size(int* array) {
	return sizeof(array);
}

int main() {
	int array[5] { 9, 7, 5, 3, 1 };

	std::cout << "Element 0 has address: " << &array[0] << '\n';
	std::cout << "The array decays to a pointer holding address: " << array
			<< '\n';

	std::cout << *array << '\n';
	char name[] { "Jason" };
	std::cout << *name << '\n';

	int *ptr { array };
	std::cout << *ptr << '\n';
	std::cout << size(array) << '\n';
	std::cout << sizeof(array) << '\n';

	return 0;
}
