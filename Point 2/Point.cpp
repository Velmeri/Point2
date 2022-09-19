#include "Point.h"

using namespace std;

Point::Point()
{
	x = y = z = 0;
}

Point::Point(int x) : Point()
{
	this->x = x;
}

Point::Point(int x, int y) : Point(x)
{
	this->y = y;
}

Point::Point(int x, int y, int z) : Point(x, y)
{
	this->z = z;
}

void Point::print()
{
	cout << "x = " << x << ", y = " << y << ", z = " << z;
}
