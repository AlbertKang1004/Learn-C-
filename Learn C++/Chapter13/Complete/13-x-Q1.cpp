#include <iostream>
#include <cmath>

class Point2d {
private:
	double m_x { };
	double m_y { };
public:
	Point2d(double x = 0.0, double y = 0.0) :
			m_x { x }, m_y { y } {
	}
	void print() const {
		std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
	}

	double distanceTo(Point2d &b) const {
		return std::sqrt(
				(m_x - b.m_x) * (m_x - b.m_x) + (m_y - b.m_y) * (m_y - b.m_y));
	}
	friend double distanceFrom(Point2d &a, Point2d &b);
};

double distanceFrom(Point2d &a, Point2d &b) {
		return std::sqrt(
				(a.m_x - b.m_x) * (a.m_x - b.m_x)
						+ (a.m_y - b.m_y) * (a.m_y - b.m_y));
	}

int main() {
	Point2d first { };
	Point2d second { 3.0, 4.0 };
	first.print();
	second.print();
	std::cout << "Distance between two points: " << first.distanceTo(second)
			<< '\n';
	std::cout << "Distance between two points: " << distanceFrom(first, second)
			<< '\n';

	return 0;
}
