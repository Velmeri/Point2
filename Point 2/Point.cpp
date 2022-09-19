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

void Point::Save(const char* path)
{
	ofstream file;
	file.open(path);
	if (!file.is_open()) {
		cout << "ERROR";
	}
	else {
		file << (char)x << (char)y << (char)z;
	}
	file.close();
}

void Point::Load(const char* path)
{
	ifstream file;
	file.open(path);
	if (!file.is_open()) {
		cout << "ERROR";
	}
	else {
		char str[4] = { 0, 0, 0 };
		file >> str;
		x = str[0];
		y = str[1];
		z = str[2];
	}
	file.close();
}