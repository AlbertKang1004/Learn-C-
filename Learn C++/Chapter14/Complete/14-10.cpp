#include <iostream>

class Matrix {
private:
	double m_data[4][4] { };
public:
	double& operator()(int row, int col);
	double operator()(int row, int col) const;
	void operator()();
};

double& Matrix::operator()(int row, int col) {
	assert(col >= 0 && col < 4);
	assert(row >= 0 && row < 4);

	return m_data[row][col];
}

double Matrix::operator()(int row, int col) const {
	assert(col >= 0 && col < 4);
	assert(row >= 0 && row < 4);

	return m_data[row][col];
}

void Matrix::operator()() {
	for (int row { 0 }; row < 4; ++row) {
		for (int col { 0 }; col < 4; ++col) {
			m_data[row][col] = 0.0;
		}
	}
}

class Accumulator {
private:
	int m_counter { 0 };
public:
	int operator()(int i) {
		return (m_counter += i);
	}
};

int main() {
	Matrix matrix;
	matrix(1, 2) = 3.5;
	matrix(); // erase matrix
	std::cout << matrix(1, 2) << '\n';

	std::cout << '\n';

	Accumulator acc{};
	std::cout << acc(10) << '\n';
	std::cout << acc(20) << '\n';
	Accumulator acc2{};
	std::cout << acc2(10) << '\n';
	return 0;
}
