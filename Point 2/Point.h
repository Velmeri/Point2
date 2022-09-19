#pragma once
#include <iostream>
#include <fstream>

class Point
{
	int x, y, z;
public:
	//constructors
	Point();
	Point(int x);
	Point(int x, int y);
	Point(int x, int y, int z);

	//accesors
	void SetX(int x);
	void SetY(int y);
	void SetZ(int z);
	int GetX();
	int GetY();
	int GetZ();

	//output
	void print();

	//fstream
	void Save(const char* path);
	void Load(const char* path);
};