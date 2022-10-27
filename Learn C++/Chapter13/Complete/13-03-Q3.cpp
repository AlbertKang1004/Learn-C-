#include <iostream>
#include <array>

class Stack {
	std::array<int, 10> arr { };
	int size { };
public:
	void reset() {
		size = 0;
	}
	bool push(int value) {
		if (size >= 10) return false;
		else {
			arr[size++] = value;
			return true;
		}
	}

	int pop() {
		assert(size != 0);
		return arr[size--];
	}

	void print() {
		std::cout << "( ";
		for (int i = 0; i < size; i++) {
			std::cout << arr[i] << ' ';
		}
		std::cout << ")\n";
	}
};

int main() {
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

	return 0;
}
