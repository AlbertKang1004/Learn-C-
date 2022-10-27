#include <iostream>
#include <cstdint>

using color = std::uint8_t;
class RGBA {
private:
	color m_red { };
	color m_green { };
	color m_blue { };
	color m_alpha { };

public:
	RGBA(color red = 0, color green = 0, color blue = 0, color alpha = 255) :
			m_red { red }, m_green { green }, m_blue { blue }, m_alpha { alpha } {

	}
	void print() {
		std::cout << "r=" << static_cast<int>(m_red) << " g="
				<< static_cast<int>(m_green) << " b="
				<< static_cast<int>(m_blue) << " a="
				<< static_cast<int>(m_alpha);
	}

};

int main() {
	RGBA teal { 0, 127, 127 };
	teal.print();

	return 0;
}
