#include <iostream>

class Cents {
private:
	int m_cents { };
public:
	Cents(int cents) :
			m_cents { cents } {
	}

	friend std::ostream& operator<<(std::ostream &ostr, const Cents &c) {
		ostr << c.m_cents;
		return ostr;
	}

	friend bool operator<(const Cents &c1, const Cents &c2) {
		return (c1.m_cents < c2.m_cents);
	}

	Cents& operator+= (const Cents &cents){
		m_cents += cents.m_cents;
		return *this;
	}

	Cents& operator/= (const Cents &cents){
		m_cents /= cents.m_cents;
		return *this;
	}
};

template<typename T>
T average(const T *myArray, int numValues) {
	T sum { 0 };
	for (int count { 0 }; count < numValues; ++count)
		sum += myArray[count];
	sum /= numValues;
	return sum;

}

int main() {
	int intArray[] { 5, 3, 2, 1, 4 };
	std::cout << average(intArray, 5) << '\n';

	double doubleArray[] { 3.12, 3.45, 9.23, 6.34 };
	std::cout << average(doubleArray, 4) << '\n';

	Cents centsArray[] { Cents { 5 }, Cents { 4 }, Cents { 10 }, Cents { 15 },
			Cents { 14 } };
	std::cout << average(centsArray, 4) << '\n';

	return 0;
}
