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

void Point::SetX(int x) {
	this->x = x;
}

void Point::SetY(int y) {
	this->y = y;
}

void Point::SetZ(int z) {
	this->z = z;
}

int Point::GetX()
{
	return x;
}

int Point::GetY()
{
	return y;
}

int Point::GetZ()
{
	return z;
}


void Point::print()
{
	cout << "x = " << x << ", y = " << y << ", z = " << z;
}

Point Point::operator+(const Point& obj)
{
	Point rez;

	rez.x = x + obj.x;
	rez.y = y + obj.y;
	rez.z = z + obj.z;

	return rez;
}

Point Point::operator-(const Point& obj)
{
	Point rez;

	rez.x = x - obj.x;
	rez.y = y - obj.y;
	rez.z = z - obj.z;

	return rez;
}
