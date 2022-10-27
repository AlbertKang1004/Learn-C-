int g_x { 2 };
// non-constant globals are external by default

extern const int g_y { 3 };
// extern constexpr int g_z { 3 };
// the compiler needs to know the value of
// the constexpr variable at compile time
// Thus, this line of code is not visible by compiler
