#include <iostream>

class Point
{
private:
	double m_x, m_y, m_z;
public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{

	}

	// Convert a Point into it's negative equivalent

	Point operator- () const;
	// Convert a Point into it's negative equivalent

	Point operator+ () const;

	bool operator! () const;

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }
};

Point Point::operator- () const
{
	return Point(-m_x, -m_y, -m_z);
}

Point Point::operator+ () const
{
	return *this;
}

bool Point::operator! () const
{
	return (m_x == 0.0 && m_y == 0.0 && m_z == 0.0);
}

int main()
{
	Point point(-4,-2,-1); // use default constructor to set to (0.0, 0.0, 0.0)

	point = -point;

	if (!point)
		std::cout << "point is set at the origin.\n";
	else
		std::cout << "point is not set at the origin.\n";

	std::cout << (+point).getX() << " " << point.getY() << " " << point.getZ();

	return 0;
}
