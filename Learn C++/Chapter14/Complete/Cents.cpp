#include "Complete/Cents.h"

Cents operator+(const Cents &c1, const Cents &c2) {
	return {c1.getCents() + c2.getCents()};
}
