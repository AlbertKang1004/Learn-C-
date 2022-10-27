//#include <iostream>
//#include <cassert>
//#include <iterator>
//
//class IntList {
//private:
//	int m_list[10] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//public:
//	int& operator[](int index);
//	int operator[](int index) const;
//};
//
//int& IntList::operator[](int index) {
//	assert(index >= 0 && index < std::size(m_list));
//	return m_list[index];
//}
//
//int IntList::operator[](int index) const {
//	assert(index >= 0 && index < std::size(m_list));
//	return m_list[index];
//}
//
//int main() {
//	IntList list { };
//	list[2] = 3;
//	std::cout << list[2] << '\n';
//	const IntList clist { };
//	std::cout << clist[1] << '\n';
//	return 0;
//}
