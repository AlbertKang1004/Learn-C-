#include <iostream>
#include <cstdint>

int main() {
	std::int8_t i8 { -128 };
	std::uint8_t u8 { 255 };
	std::int16_t i16 { -32768 };
	std::uint16_t u16 { 65535 };
	std::int32_t i32 { -2147483648 };
	std::uint32_t u32 { 4294967295 };
	std::int64_t i64 { -9223372036854775807 }; // max - 1
	std::uint64_t u64 { 1844674407370955161 }; // (max - 5) / 10

	std::cout << i8 << std::endl;
	std::cout << u8 << std::endl;
	std::cout << i16 << std::endl;
	std::cout << u16 << std::endl;
	std::cout << i32 << std::endl;
	std::cout << u32 << std::endl;
	std::cout << i64 << std::endl;
	std::cout << u64 << std::endl;

	std::cout << std::endl;

	std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	std::cout << '\n';
	std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
	return 0;
}
