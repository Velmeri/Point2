#pragma once
#include <iostream>

class Point
{
	int x, y, z;
public:
	//constructors
	Point();
	Point(int x);
	Point(int x, int y);
	Point(int x, int y, int z);

	//output
	void print();
};