#include <iostream>
#include <string>

enum Color {
	black = -3, red, 		// -2
	blue, 		// -1
	green = 5,
	white, 		// 6
	cyan,		// 7
	yellow, 	// 8
	magenta, 	// 9
};

constexpr std::string_view getColor(Color color) {
	switch (color) {
	case black:
		return "black";
	case red:
		return "red";
	case blue:
		return "blue";
	case green:
		return "green";
	case white:
		return "white";
	case cyan:
		return "cyan";
	case yellow:
		return "yellow";
	case magenta:
		return "magenta";
	default:
		return "???";
	}
}

std::ostream& operator<<(std::ostream &out, Color color) {
	switch (color) {
	case black:
		out << "black";
		break;
	case red:
		out << "red";
		break;
	case blue:
		out << "blue";
		break;
	case green:
		out << "green";
		break;
	case white:
		out << "white";
		break;
	case cyan:
		out << "cyan";
		break;
	case yellow:
		out << "yellow";
		break;
	case magenta:
		out << "magenta";
		break;
	default:
		out << "???";
		break;
	}
	return out;
}

int main() {
	Color shirt { blue };

	std::cout << "Your shirt is " << shirt << std::endl;

	Color sky { static_cast<Color>(7) };
	std::cout << "The sky is " << sky << std::endl;
	return 0;
}
