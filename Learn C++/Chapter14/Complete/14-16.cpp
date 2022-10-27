#include <cstring>
#include <cassert>
#include <iostream>

class MyString {
private:
	char *m_data { };
	int m_length { };

public:

	MyString(const char *source = "") {
		assert(source);
		m_length = std::strlen(source) + 1;

		m_data = new char[m_length];
		for (int i { 0 }; i < m_length; ++i)
			m_data[i] = source[i];
	}

	~MyString() {
		delete[] m_data;
	}

	char* getString() {
		return m_data;
	}
	int getLength() {
		return m_length;
	}

};

int main() {
	MyString hello { "Hello world" };
//	{
//		MyString copy { hello };
//	}

	std::cout << hello.getString() << '\n';
	return 0;
}
