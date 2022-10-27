//#include <iostream>
//#include <numeric>
//
//class Fraction {
//private:
//	int m_num { 0 };
//	int m_den { 1 };
//public:
//	Fraction(int num, int den = 1) :
//			m_num { num }, m_den { den } {
//		reduce();
//	}
//	void reduce() {
//		int GCD { std::gcd(m_num, m_den) };
//		if (m_num != 0) {
//			m_num /= GCD;
//			m_den /= GCD;
//		} else {
//			m_den = 1;
//		}
//	}
//	void print() {
//		std::cout << m_num << '/' << m_den << '\n';
//	}
//
//	friend Fraction operator*(const Fraction &f1, const Fraction &f2);
//	friend Fraction operator*(const Fraction &f, int value);
//	friend Fraction operator*(int value, const Fraction &f);
//};
//
//Fraction operator*(const Fraction &f1, const Fraction &f2) {
//	return {f1.m_num * f2.m_num, f1.m_den * f2.m_den};
//}
//
//Fraction operator*(const Fraction &f, int value) {
//	return {f.m_num * value, f.m_den};
//}
//
//Fraction operator*(int value, const Fraction &f) {
//	return {f * value};
//}
//
//int main() {
//
//	Fraction f1 { 2, 5 };
//	f1.print();
//
//	Fraction f2 { 3, 8 };
//	f2.print();
//
//	Fraction f3 { f1 * f2 };
//	f3.print();
//
//	Fraction f4 { f1 * 2 };
//	f4.print();
//
//	Fraction f5 { 2 * f2 };
//	f5.print();
//
//	Fraction f6 { Fraction { 1, 2 } * Fraction { 2, 3 } * Fraction { 3, 4 } };
//	f6.print();
//
//	Fraction f7 { 0, 6 };
//	f7.print();
//
//	return 0;
//}
