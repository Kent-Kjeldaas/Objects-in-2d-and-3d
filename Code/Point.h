#pragma once
#include <iostream>

class Point
{
public:
	Point(int x, int y, int z);
	Point();
	~Point();

	int getX();
	int getY();
	int getZ();

	friend std::ostream &operator<<(std::ostream &stream, Point p);

private:
	int xKord, yKord, zKord;
};

